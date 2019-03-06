
// Generated from d:\Programmes\Qt\Projets\SIL\SIL\ANTLR\SIL.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "SILParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by SILParser.
 */
class  SILVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by SILParser.
   */
    virtual antlrcpp::Any visitFile(SILParser::FileContext *context) = 0;

    virtual antlrcpp::Any visitInstruction_list(SILParser::Instruction_listContext *context) = 0;

    virtual antlrcpp::Any visitInstruction(SILParser::InstructionContext *context) = 0;

    virtual antlrcpp::Any visitBlock(SILParser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitAction(SILParser::ActionContext *context) = 0;

    virtual antlrcpp::Any visitExpression_list(SILParser::Expression_listContext *context) = 0;

    virtual antlrcpp::Any visitIf_elif_else(SILParser::If_elif_elseContext *context) = 0;

    virtual antlrcpp::Any visitWhile_loop(SILParser::While_loopContext *context) = 0;

    virtual antlrcpp::Any visitParenthesis_expression(SILParser::Parenthesis_expressionContext *context) = 0;

    virtual antlrcpp::Any visitMultiplication_division_modulo(SILParser::Multiplication_division_moduloContext *context) = 0;

    virtual antlrcpp::Any visitVariable_modulo(SILParser::Variable_moduloContext *context) = 0;

    virtual antlrcpp::Any visitPre_incrementation(SILParser::Pre_incrementationContext *context) = 0;

    virtual antlrcpp::Any visitComparison(SILParser::ComparisonContext *context) = 0;

    virtual antlrcpp::Any visitOr(SILParser::OrContext *context) = 0;

    virtual antlrcpp::Any visitAtomic_value(SILParser::Atomic_valueContext *context) = 0;

    virtual antlrcpp::Any visitEquality_difference(SILParser::Equality_differenceContext *context) = 0;

    virtual antlrcpp::Any visitFunction_call(SILParser::Function_callContext *context) = 0;

    virtual antlrcpp::Any visitVariable_multiplication(SILParser::Variable_multiplicationContext *context) = 0;

    virtual antlrcpp::Any visitUnary_minus(SILParser::Unary_minusContext *context) = 0;

    virtual antlrcpp::Any visitPost_incrementation(SILParser::Post_incrementationContext *context) = 0;

    virtual antlrcpp::Any visitVariable_division(SILParser::Variable_divisionContext *context) = 0;

    virtual antlrcpp::Any visitPre_decrementation(SILParser::Pre_decrementationContext *context) = 0;

    virtual antlrcpp::Any visitCast(SILParser::CastContext *context) = 0;

    virtual antlrcpp::Any visitNot(SILParser::NotContext *context) = 0;

    virtual antlrcpp::Any visitAddition_substraction(SILParser::Addition_substractionContext *context) = 0;

    virtual antlrcpp::Any visitVariable_substraction(SILParser::Variable_substractionContext *context) = 0;

    virtual antlrcpp::Any visitVariable_affectation(SILParser::Variable_affectationContext *context) = 0;

    virtual antlrcpp::Any visitAnd(SILParser::AndContext *context) = 0;

    virtual antlrcpp::Any visitPower(SILParser::PowerContext *context) = 0;

    virtual antlrcpp::Any visitVariable_power(SILParser::Variable_powerContext *context) = 0;

    virtual antlrcpp::Any visitVariable_addition(SILParser::Variable_additionContext *context) = 0;

    virtual antlrcpp::Any visitPost_decrementation(SILParser::Post_decrementationContext *context) = 0;

    virtual antlrcpp::Any visitAtom(SILParser::AtomContext *context) = 0;

    virtual antlrcpp::Any visitValue_expression(SILParser::Value_expressionContext *context) = 0;

    virtual antlrcpp::Any visitSpecial_value_expression(SILParser::Special_value_expressionContext *context) = 0;

    virtual antlrcpp::Any visitFunction_declaration(SILParser::Function_declarationContext *context) = 0;

    virtual antlrcpp::Any visitParameter_list(SILParser::Parameter_listContext *context) = 0;

    virtual antlrcpp::Any visitVariable_declaration(SILParser::Variable_declarationContext *context) = 0;

    virtual antlrcpp::Any visitVariable_creation(SILParser::Variable_creationContext *context) = 0;


};

