#ifndef RVALUE_H
#define RVALUE_H

#include <string>
#include <variant>
#include <functional>

typedef std::variant<int, double, bool, std::string> RValue;

template<class... Ts> struct overload : Ts... { using Ts::operator()...; };
template<class... Ts> overload(Ts...) -> overload<Ts...>;

std::ostream& operator<<(std::ostream& stream, RValue& value);

RValue operator*(RValue& left, RValue& right);
RValue operator/(RValue& left, RValue& right);
RValue operator%(RValue& left, RValue& right);

RValue operator+(RValue& left, RValue& right);
RValue operator-(RValue& left, RValue& right);

#endif // RVALUE_H
