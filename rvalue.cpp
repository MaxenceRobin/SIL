#include "rvalue.h"

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

// ------------------------------------------------------------------------------------------------

template <>
RValue cast<std::string>(RValue& value)
{
    return std::visit(overload{
                          [](int& val) -> RValue { return std::to_string(val); },
                          [](double &val) -> RValue { return std::to_string(val); },
                          [](bool& val) -> RValue { return val ? "true" : "false"; },
                          [](auto& val) -> RValue { return val; }
                      }, value);
}

template <>
RValue cast<int>(RValue& value)
{
    return std::visit(overload{
                          [](auto& val) -> RValue { return static_cast<int>(val); },
                          [](std::string& val) -> RValue { return std::stoi(val); },
                      }, value);
}

template <>
RValue cast<double>(RValue& value)
{
    return std::visit(overload{
                          [](auto& val) -> RValue { return static_cast<double>(val); },
                          [](std::string& val) -> RValue { return std::stod(val); }
                      }, value);
}

template <>
RValue cast<bool>(RValue& value)
{
    return std::visit(overload{
                          [](auto& val) -> RValue { return static_cast<bool>(val); },
                          [](std::string& val) -> RValue { return val == "true"; }
                      }, value);
}
