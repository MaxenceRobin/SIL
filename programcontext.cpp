#include "programcontext.h"
#include "silexception.h"

// Constructors and destructor --------------------------------------------------------------------

/**
 * @brief Initializes the program context
 */
ProgramContext::ProgramContext()
{
    addContext();
}

ProgramContext& ProgramContext::getInstance()
{
    static ProgramContext instance;
    return instance;
}

// Methods ----------------------------------------------------------------------------------------

/**
 * @brief Adds a new context on the stack
 */
void ProgramContext::addContext()
{
    variablesContexts.push_back(ContextBlockList());
    addBlock();
}

/**
 * @brief Removes the last context of the stack
 */
void ProgramContext::removeContext()
{
    variablesContexts.pop_back();
}

/**
 * @brief Adds a block at the end of the stack of the last context
 */
void ProgramContext::addBlock()
{
    variablesContexts.back().push_back(ContextBlock());
}

/**
 * @brief Removes the last block on the stack of the last context of the stack
 */
void ProgramContext::removeBlock()
{
    variablesContexts.back().pop_back();
}

/**
 * @brief Creates a new variable on the last block of the stack of the last context of the stack
 */
Variable& ProgramContext::createVariable(const std::string &name)
{
    Variable& newVariable = variablesContexts.back().back()[name];
    return newVariable;
}

/**
 * @brief Returns the variable with the given name in the last context of the stack, iterating the blocks backward
 */
Variable& ProgramContext::getVariable(const std::string &name)
{
    ContextBlockList& blockList = variablesContexts.back();

    // The blocks are itered backward
    for (auto it = blockList.rbegin(); it != blockList.rend(); it++)
    {
        if (it->find(name) != it->end())
        {
            return it->at(name);
        }
    }

    throw SILexception("La variable '" + name + "' n'existe pas");
}
