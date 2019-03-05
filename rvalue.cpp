#include "rvalue.h"

std::ostream& operator<<(std::ostream& stream, RValue& value)
{
    std::visit([&stream](auto& value) { stream << value; }, value);
    return stream;
}

RValue operator+(RValue& left, RValue& right)
{
    return std::visit(
                overload{
                    [](std::string& left, std::string& right) -> RValue { return left + right; },
                    [](std::string& left, auto& right) -> RValue { return left; },
                    [](auto& left, std::string& right) -> RValue { return right; },
                    [](auto& left, auto& right) -> RValue { return left + right; }
                }, left, right);
}
