#include "silinterpreter.h"
#include "ANTLR/antlr4-runtime/SILLexer.h"

#include "rvalue.h"

#include <iostream>
#include <vector>
#include <regex>

#include <stdlib.h>
#include <time.h>

using namespace antlr4;

// Template specialisation to correctly cast Variable as RValue
template <>
RValue& Any::as<RValue>()
{
    if (this->is<Variable>())
    {
        return this->as<Variable>();
    }

    typedef StorageType<RValue> T;
    auto derived = dynamic_cast<Derived<T>*>(_ptr);

    if (!derived)
      throw std::bad_cast();

    return derived->value;
}

/**
 * @brief Initializes the settings of the interpreter
 */
SILinterpreter::SILinterpreter()
{
    srand(static_cast<unsigned int>(time(nullptr)));
    rand(); // The first rand is thrown away since it seems too dependant on the seed
    std::cout << std::boolalpha;
}

SILinterpreter::~SILinterpreter()
{
}

/**
 * @brief Executes the given file
 */
void SILinterpreter::execute(const std::string &fileName)
{
    ANTLRFileStream stream(fileName);
    SILLexer lexer(&stream);
    CommonTokenStream tokens(&lexer);
    SILParser parser(&tokens);

    SILParser::FileContext* tree = parser.file();
    visitFile(tree);
}

/**
 * @brief Visits the main file, containing all the instructions
 */
Any SILinterpreter::visitFile(SILParser::FileContext *context)
{
    visitInstruction_list(context->instruction_list());

    return 0;
}

/**
 * @brief Visits each instruction of the list
 */
Any SILinterpreter::visitInstruction_list(SILParser::Instruction_listContext *context)
{
    for (auto instruction : context->instructions)
    {
        visitInstruction(instruction);
    }

    return 0;
}

/**
 * @brief Visits an instruction
 */
Any SILinterpreter::visitInstruction(SILParser::InstructionContext *context)
{
    if (context->block())
    {
        visitBlock(context->block());
    }
    else // action
    {
        visitAction(context->action());
    }

    return 0;
}

/**
 * @brief Visits a block
 */
Any SILinterpreter::visitBlock(SILParser::BlockContext *context)
{
    visitInstruction_list(context->instruction_list());

    return 0;
}

/**
 * @brief Visits an action
 */
Any SILinterpreter::visitAction(SILParser::ActionContext *context)
{
    if (context->OUT())
    {
        auto& expressions = visitExpression_list(context->expression_list()).as<std::vector<SILParser::ExpressionContext*>>();

        for (auto expression : expressions)
        {
            RValue& value = visit(expression).as<RValue>();
            std::cout << value;
        }
    }
    else if (context->PAUSE())
    {
        // Waits until the user presses 'Enter'
        getchar();
    }
    else if (context->if_elif_else())
    {
        visitIf_elif_else(context->if_elif_else());
    }
    else if (context->while_loop())
    {
        visitWhile_loop(context->while_loop());
    }
    else if (context->variable_creation())
    {
        visitVariable_creation(context->variable_creation());
    }
    else if (context->expression())
    {
        visit(context->expression());
    }

    return 0;
}

/**
 * @brief Returns a list of SILParser::ExpressionContext*
 */
Any SILinterpreter::visitExpression_list(SILParser::Expression_listContext *context)
{
    std::vector<SILParser::ExpressionContext*> expressions;

    for (auto expression : context->expressions)
    {
        expressions.push_back(expression);
    }

    return std::move(expressions);
}

/**
 * @brief Executes instructions if specified conditions are verrified
 */
Any SILinterpreter::visitIf_elif_else(SILParser::If_elif_elseContext *context)
{
    if (std::get<bool>(visit(context->if_condition).as<RValue>()))
    {
        return visitInstruction(context->if_instruction);
    }

    unsigned int i = 0;
    for (auto elifCondition : context->elif_condition)
    {
        if (std::get<bool>(visit(elifCondition).as<RValue>()))
        {
            return visitInstruction(context->elif_instruction[i]);
        }
        i++;
    }

    if (context->ELSE())
    {
        return visitInstruction(context->else_instruction);
    }

    return 0;
}

/**
 * @brief Repeats the instructions as long as the condition is true
 */
Any SILinterpreter::visitWhile_loop(SILParser::While_loopContext *context)
{
    while (std::get<bool>(visit(context->expression()).as<RValue>()))
    {
        visitInstruction(context->instruction());
    }

    return 0;
}

/**
 * @brief Visits all of the '*', '/' and '%' operators
 */
Any SILinterpreter::visitMultiplication_division_modulo(SILParser::Multiplication_division_moduloContext *context)
{
    RValue result;

    RValue& left = visit(context->left).as<RValue>();
    RValue& right = visit(context->right).as<RValue>();

    if (context->STAR())
    {
        result = left * right;
    }
    else if (context->SLASH())
    {
        result = left / right;
    }
    else // PERCENT
    {
        result = left % right;
    }

    return std::move(result);
}

/**
 * @brief Visits both '+' and '-' operators
 */
Any SILinterpreter::visitAddition_substraction(SILParser::Addition_substractionContext *context)
{
    RValue result;

    RValue& left = visit(context->left).as<RValue>();
    RValue& right = visit(context->right).as<RValue>();

    if (context->PLUS())
    {
        result = left + right;
    }
    else // MINUS
    {
        result = left - right;
    }

    return std::move(result);
}

/**
 * @brief Compares two values and returns a boolean
 */
Any SILinterpreter::visitComparison(SILParser::ComparisonContext *context)
{
    RValue result;

    RValue& left = visit(context->left).as<RValue>();
    RValue& right = visit(context->right).as<RValue>();

    if (context->LT())
    {
        result = (left < right);
    }
    else if (context->LEQ())
    {
        result = (left <= right);
    }
    else if (context->GT())
    {
        result = (left > right);
    }
    else // GEQ
    {
        result = (left >= right);
    }

    return std::move(result);
}

/**
 * @brief Returns the result of an equality or difference between two expressions
 */
Any SILinterpreter::visitEquality_difference(SILParser::Equality_differenceContext *context)
{
    RValue result;

    RValue& left = visit(context->left).as<RValue>();
    RValue& right = visit(context->right).as<RValue>();

    if (context->EQU())
    {
        result = (left == right);
    }
    else  // DIF
    {
        result = (left != right);
    }

    return std::move(result);
}

/**
 * @brief Returns a value depending on the result of the condition
 */
Any SILinterpreter::visitTernary(SILParser::TernaryContext *context)
{
    RValue& condition = visit(context->condition).as<RValue>();
    RValue result;

    if (std::get<bool>(condition))
    {
        result = visit(context->first).as<RValue>();
    }
    else
    {
        result = visit(context->second).as<RValue>();
    }

    return std::move(result);
}

/**
 * @brief Modifies the value of a variable
 */
Any SILinterpreter::visitVariable_affectation(SILParser::Variable_affectationContext *context)
{
    const std::string& name = context->Id()->getText();
    RValue& value = visit(context->expression()).as<RValue>();

    Variable& variable = variables[name];
    variable.setValue(value);

    return variable;
}

/**
 * @brief Visits an atomic value
 */
Any SILinterpreter::visitAtomic_value(SILParser::Atomic_valueContext *context)
{
    return visitAtom(context->atom());
}

/**
 * @brief Visits an atomic expression
 */
Any SILinterpreter::visitAtom(SILParser::AtomContext *context)
{
    if (context->value_expression())
    {
        return visitValue_expression(context->value_expression());
    }
    else // Special value expression
    {
        return visitSpecial_value_expression(context->special_value_expression());
    }
}

/**
 * @brief Visits an expression represented by another expression surrounded by parenthesis
 */
Any SILinterpreter::visitParenthesis_expression(SILParser::Parenthesis_expressionContext *context)
{
    return visit(context->expression());
}

/**
 * @brief Visits a cast expression
 */
Any SILinterpreter::visitCast(SILParser::CastContext *context)
{
    RValue result;

    auto& value = visit(context->expression()).as<RValue>();
    const std::string& type = context->TYPE()->getText();

    if (type == "integer")
    {
        result = cast<int>(value);
    }
    else if (type == "number")
    {
        result = cast<double>(value);
    }
    else if (type == "string")
    {
        result = cast<std::string>(value);
    }
    else // boolean
    {
        result = cast<bool>(value);
    }

    return std::move(result);
}

/**
 * @brief Visit an expression representing a value
 */
Any SILinterpreter::visitValue_expression(SILParser::Value_expressionContext *context)
{
    RValue value;

    if (context->number())
    {
        value = visitNumber(context->number());
    }
    else if (context->String())
    {
        std::string result = context->getText();

        // Removing beginning and ending quotes
        result.erase(result.begin());
        result.erase(result.end() - 1);

        // Replacing "\n" by actual line break, and "\t" by actual tabulations
        replaceAll(result, "\\n", "\n");
        replaceAll(result, "\\t", "\t");

        value = std::move(result);
    }
    else if (context->Id())
    {
        const std::string& name = context->Id()->getText();

        if (variables.find(name) != variables.end())
        {
            Variable variable = variables[name];
            return std::move(variable);
        }
        else
        {
            throw 0;
        }
    }
    else if (context->function_declaration())
    {
        value = true;
    }
    else if (context->TRUE())
    {
        value = true;
    }
    else // FALSE
    {
        value = false;
    }

    return std::move(value);
}

/**
 * @brief Returns an integer or a decimal number
 */
Any SILinterpreter::visitNumber(SILParser::NumberContext *context)
{
    RValue result;

    // If it's a decimal number
    if (context->DECIMAL_PART())
    {
        result = std::stod(context->getText());
    }
    else // If it's only an integer
    {
        result = std::stoi(context->INTEGER_PART()->getText());
    }

    return std::move(result);
}

/**
 * @brief Visits an expression representing a special value
 */
Any SILinterpreter::visitSpecial_value_expression(SILParser::Special_value_expressionContext *context)
{
    RValue value;

    if (context->IN())
    {
        std::string input;
        std::getline(std::cin, input);

        value = std::move(input);
    }
    else if (context->RANDOM())
    {
        value = rand();
    }
    else // NEWLINE
    {
        value = std::string("\n");
    }

    return std::move(value);
}

/**
 * @brief Creates a new variable
 */
Any SILinterpreter::visitVariable_creation(SILParser::Variable_creationContext *context)
{
    const std::string& name = context->Id()->getText();
    Variable& newVariable = variables[name];

    if (context->AFF())
    {
        auto& value = visit(context->expression()).as<RValue>();
        newVariable.setValue(value);
    }

    if (context->TYPE())
    {
        const std::string& type = context->TYPE()->getText();

        if (type == "integer")
        {
            newVariable.setValueType(Variable::ValueType::Integer);
        }
        else if (type == "number")
        {
            newVariable.setValueType(Variable::ValueType::Number);
        }
        else if (type == "boolean")
        {
            newVariable.setValueType(Variable::ValueType::Boolean);
        }
        else if (type == "string")
        {
            newVariable.setValueType(Variable::ValueType::String);
        }
    }

    if (context->CONST())
    {
        newVariable.setStatusType(Variable::StatusType::Const);
    }

    return newVariable;
}

// Other methods ----------------------------------------------------------------------------------

/**
 * @brief Replaces all the occurences of 'from' by 'to' in the source
 * @param source : The base string to replace elements into
 * @param from : The sequence to seek and replace
 * @param to : The sequence by which to replace each found occurence
 */
void SILinterpreter::replaceAll(std::string& source, const std::string& from, const std::string& to) const
{
    size_t pos = 0;

    while ((pos = source.find(from, pos)) != std::string::npos)
    {
        source.replace(pos, from.length(), to);
    }
}
