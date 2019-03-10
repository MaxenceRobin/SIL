#ifndef EXCEPTION_H
#define EXCEPTION_H

#include <string>

class SILexception
{
public:
    SILexception(const std::string& m);

    const std::string& getMessage() const;

private:
    std::string message;
};

#endif // EXCEPTION_H
