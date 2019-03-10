#ifndef PROGRAMCONTEXT_H
#define PROGRAMCONTEXT_H

#include "variable.h"

#include <string>
#include <vector>
#include <unordered_map>

typedef std::unordered_map<std::string, Variable> ContextBlock;
typedef std::vector<ContextBlock> ContextBlockList;

class ProgramContext
{
public:
    ProgramContext();

    void addContext();
    void removeContext();

    void addBlock();
    void removeBlock();

    Variable& createVariable(const std::string& name);
    Variable& getVariable(const std::string& name);

private:
    std::vector<ContextBlockList> variablesContexts;
};

#endif // PROGRAMCONTEXT_H
