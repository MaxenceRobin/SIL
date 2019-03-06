#ifndef SILCOMPILER_H
#define SILCOMPILER_H

#include "ANTLR/antlr4-runtime/SILBaseVisitor.h"

using antlrcpp::Any;

/**
 * @brief Interpret and execute the SIL program
 */
class SILinterpreter : public SILBaseVisitor
{
public:
    SILinterpreter();
    virtual ~SILinterpreter() override;

    void execute(const std::string& fileName);

private:

    virtual Any visitFile(SILParser::FileContext* context) override;
    virtual Any visitInstruction_list(SILParser::Instruction_listContext* context) override;

    virtual Any visitInstruction(SILParser::InstructionContext* context) override;
    virtual Any visitBlock(SILParser::BlockContext* context) override;
    virtual Any visitAction(SILParser::ActionContext* context) override;

    virtual Any visitExpression_list(SILParser::Expression_listContext* context) override;

    virtual Any visitAtomic_value(SILParser::Atomic_valueContext* context) override;
    virtual Any visitAtom(SILParser::AtomContext* context) override;
    virtual Any visitParenthesis_expression(SILParser::Parenthesis_expressionContext* context) override;

    virtual Any visitMultiplication_division_modulo(SILParser::Multiplication_division_moduloContext* context) override;
    virtual Any visitAddition_substraction(SILParser::Addition_substractionContext* context) override;

    virtual Any visitValue_expression(SILParser::Value_expressionContext* context) override;
    virtual Any visitSpecial_value_expression(SILParser::Special_value_expressionContext* context) override;

    // Convenience methods
    void replaceAll(std::string& source, const std::string& from, const std::string& to) const;

};

#endif // SILCOMPILER_H
