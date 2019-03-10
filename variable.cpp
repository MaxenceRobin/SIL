#include "variable.h"
#include "silexception.h"

/*
 * This table represent the non obvious compatible types
 * Each pair represent a non obvious compatible association with :
 *  The first value representing the type of the variable
 *  The second value representing the type of the RValue
 *
 * Each type are represented using the index method of RValue, which means
 * 0 = integer, 1 = double, 2 = boolean, 3 = string etc...
 */
CompatibilityTable Variable::compatibleTypes = {
    {1, 0} // Doubles can accept integers
};

// Constructors and destructor --------------------------------------------------------------------

/**
 * @brief Creates a new variable
 */
Variable::Variable()
    : RValue(0),
      statusType(Variable::StatusType::Var),
      valueType(Variable::ValueType::Any)
{
}

// Methods ----------------------------------------------------------------------------------------

/**
 * @brief Returns the status type of the variable
 */
Variable::StatusType Variable::getStatusType() const
{
    return statusType;
}

/**
 * @brief Returns the value type of the variable
 */
Variable::ValueType Variable::getValueType() const
{
    return valueType;
}

/**
 * @brief Changes the status type of the variable
 */
void Variable::setStatusType(StatusType newStatusType)
{
    statusType = newStatusType;
}

/**
 * @brief Changes the value type of the variable
 */
void Variable::setValueType(ValueType newValueType)
{
    valueType = newValueType;
}

// Operators --------------------------------------------------------------------------------------

/**
 * @brief Changes the value of the variable
 */
Variable& Variable::setValue(const RValue &value)
{
    // An exception is thrown if the user tries to modify a constant
    if (statusType == Variable::StatusType::Const)
    {
        throw SILexception("Impossible de modifier constante");
    }

    if (valueType != Variable::ValueType::Any)
    {
        // If the types are nor directly compatible
        if (index() != value.index())
        {
            // Neither indirectly compatible
            if (compatibleTypes.find({index(), value.index()}) == compatibleTypes.end())
            {
                throw SILexception("Affectation d'une mauvaise valeur a une variable typee");
            }
        }
    }

    RValue::operator=(value);
    return *this;
}
