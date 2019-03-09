#ifndef SILCOMPILER_H
#define SILCOMPILER_H

#include "ANTLR/antlr4-runtime/SILBaseVisitor.h"

#include "variable.h"

#include <unordered_map>

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

    virtual Any visitIf_elif_else(SILParser::If_elif_elseContext* context) override;
    virtual Any visitWhile_loop(SILParser::While_loopContext* context) override;

    virtual Any visitAtomic_value(SILParser::Atomic_valueContext* context) override;
    virtual Any visitAtom(SILParser::AtomContext* context) override;
    virtual Any visitParenthesis_expression(SILParser::Parenthesis_expressionContext* context) override;

    virtual Any visitCast(SILParser::CastContext* context) override;

    virtual Any visitMultiplication_division_modulo(SILParser::Multiplication_division_moduloContext* context) override;
    virtual Any visitAddition_substraction(SILParser::Addition_substractionContext* context) override;

    virtual Any visitComparison(SILParser::ComparisonContext* context) override;
    virtual Any visitEquality_difference(SILParser::Equality_differenceContext* context) override;

    virtual Any visitTernary(SILParser::TernaryContext* context) override;

    virtual Any visitVariable_affectation(SILParser::Variable_affectationContext* context) override;

    virtual Any visitValue_expression(SILParser::Value_expressionContext* context) override;
    virtual Any visitNumber(SILParser::NumberContext* context) override;
    virtual Any visitSpecial_value_expression(SILParser::Special_value_expressionContext* context) override;

    virtual Any visitVariable_creation(SILParser::Variable_creationContext* context) override;

    // Convenience methods
    void replaceAll(std::string& source, const std::string& from, const std::string& to) const;

private:

    std::unordered_map<std::string, Variable> variables;
};

#endif // SILCOMPILER_H
