#include "silinterpreter.h"
#include "ANTLR/antlr4-runtime/SILLexer.h"

#include "rvalue.h"

#include <iostream>
#include <vector>
#include <regex>

#include <stdlib.h>
#include <time.h>

using namespace antlr4;

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
            // We use the neutral 'visit' method because there is no visitExpression specific method
            auto& value = visit(expression).as<RValue>();
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
    else // variable creation
    {
        visitVariable_creation(context->variable_creation());
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
 * @brief Visits all of the '*', '/' and '%' operators
 */
Any SILinterpreter::visitMultiplication_division_modulo(SILParser::Multiplication_division_moduloContext *context)
{
    auto& left = visit(context->left).as<RValue>();
    auto& right = visit(context->right).as<RValue>();

    if (context->STAR())
    {
        return left * right;
    }
    else if (context->SLASH())
    {
        return left / right;
    }
    else // PERCENT
    {
        return left % right;
    }
}

/**
 * @brief Visits both '+' and '-' operators
 */
Any SILinterpreter::visitAddition_substraction(SILParser::Addition_substractionContext *context)
{
    auto& left = visit(context->left).as<RValue>();
    auto& right = visit(context->right).as<RValue>();

    if (context->PLUS())
    {
        return left + right;
    }
    else // MINUS
    {
        return left - right;
    }
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
 * @brief Visit an expression representing a value
 */
Any SILinterpreter::visitValue_expression(SILParser::Value_expressionContext *context)
{
    RValue value;

    if (context->Number())
    {
        value = std::stoi(context->getText());
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
        value = true;
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
