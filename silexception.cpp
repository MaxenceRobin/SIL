#include "silexception.h"

SILexception::SILexception(const std::string &m)
    : message(m)
{
}

const std::string& SILexception::getMessage() const
{
    return message;
}
