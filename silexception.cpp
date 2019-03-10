#include "silexception.h"

// Constructors and destructor --------------------------------------------------------------------

/**
 * @brief Creates an exception with the given message
 */
SILexception::SILexception(const std::string &m)
    : message(m)
{
}

// Methods ----------------------------------------------------------------------------------------

/**
 * @brief Returns the message of the exception
 */
const std::string& SILexception::getMessage() const
{
    return message;
}
