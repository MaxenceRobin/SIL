#include "rvalue.h"

#define ERROR_F(type) ERROR(type, type),\
                      ERROR_B(type, auto)

#define ERROR_B(tleft, tright) ERROR(tleft, tright),\
                               ERROR(tright, tleft)

#define ERROR(tleft, tright) [](tleft&, tright&) -> RValue { throw 0; }

std::ostream& operator<<(std::ostream& stream, RValue& value)
{
    std::visit([&stream](auto& value) { stream << value; }, value);
    return stream;
}

RValue operator*(RValue& left, RValue& right)
{
    return std::visit(
                overload{
                    [](auto& left, auto& right) -> RValue { return left * right; },

                    ERROR_F(std::string)
                }, left, right);
}

RValue operator/(RValue& left, RValue& right)
{
    return std::visit(
                overload{
                    [](auto& left, auto& right) -> RValue { return left / right; },

                    ERROR_F(std::string)
                }, left, right);
}

RValue operator%(RValue& left, RValue& right)
{
    return std::visit(
                overload{
                    [](int& left, int& right) -> RValue { return left % right; },

                    ERROR(auto, auto)
                }, left, right);
}

RValue operator+(RValue& left, RValue& right)
{
    return std::visit(
                overload{
                    [](auto& left, auto& right) -> RValue { return left + right; },
                    [](std::string& left, std::string& right) -> RValue { return left + right; },

                    ERROR_B(std::string, auto),
                }, left, right);
}

RValue operator-(RValue& left, RValue& right)
{
    return std::visit(
                overload{
                    [](auto& left, auto& right) -> RValue { return  left - right; },

                    ERROR_F(std::string),
                }, left, right);
}
