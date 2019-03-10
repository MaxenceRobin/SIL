#ifndef RVALUE_H
#define RVALUE_H

#include <string>
#include <variant>
#include <functional>

#include "silexception.h"


#define ERROR_F(type, message) ERROR(type, type, message),\
                      ERROR_B(type, auto, message)

#define ERROR_B(tleft, tright, message) ERROR(tleft, tright, message),\
                               ERROR(tright, tleft, message)

#define ERROR(tleft, tright, message) [](tleft&, tright&) -> RValue { throw SILexception(message); }

typedef std::variant<int, double, bool, std::string> RValue;

template<class... Ts> struct overload : Ts... { using Ts::operator()...; };
template<class... Ts> overload(Ts...) -> overload<Ts...>;

// ------------------------------------------------------------------------------------------------

std::ostream& operator<<(std::ostream& stream, RValue& value);

RValue operator*(RValue& left, RValue& right);
RValue operator/(RValue& left, RValue& right);
RValue operator%(RValue& left, RValue& right);

RValue operator+(RValue& left, RValue& right);
RValue operator-(RValue& left, RValue& right);

RValue operator<(RValue& left, RValue& right);
RValue operator<=(RValue& left, RValue& right);
RValue operator>(RValue& left, RValue& right);
RValue operator>=(RValue& left, RValue& right);

RValue operator==(RValue& left, RValue& right);
RValue operator!=(RValue& left, RValue& right);

// ------------------------------------------------------------------------------------------------

template <typename T>
RValue cast(RValue& value)
{
    return std::visit([](auto& val) -> RValue { return std::move(static_cast<T>(val)); }, value);
}

template <>
RValue cast<std::string>(RValue& value);

template <>
RValue cast<int>(RValue& value);

template <>
RValue cast<double>(RValue& value);

template <>
RValue cast<bool>(RValue& value);

#endif // RVALUE_H
