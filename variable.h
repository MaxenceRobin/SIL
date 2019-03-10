#ifndef VARIABLE_H
#define VARIABLE_H

#include "rvalue.h"

#include <set>
#include <utility>

typedef std::pair<int, int> CompatibilityKey;
typedef std::set<CompatibilityKey> CompatibilityTable;

class Variable : public RValue
{
public:

    enum class StatusType
    {
        Var,
        Const
    };

    enum class ValueType
    {
        Any,
        Integer,
        Number,
        Boolean,
        String,
        Function,
        Void
    };

    Variable();

    StatusType getStatusType() const;
    ValueType getValueType() const;

    void setStatusType(StatusType newStatusType);
    void setValueType(ValueType newValueType);

    Variable& setValue(const RValue& value);

private:

    StatusType statusType;
    ValueType valueType;

    static CompatibilityTable compatibleTypes;
};

#endif // VARIABLE_H
