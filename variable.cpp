#include "variable.h"

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
    RValue::operator=(value);
    return *this;
}
