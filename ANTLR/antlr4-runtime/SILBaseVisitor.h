
// Generated from d:\Programmes\Qt\Projets\SIL\SIL\ANTLR\SIL.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "SILVisitor.h"


/**
 * This class provides an empty implementation of SILVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  SILBaseVisitor : public SILVisitor {
public:

  virtual antlrcpp::Any visitFile(SILParser::FileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInstruction_list(SILParser::Instruction_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInstruction(SILParser::InstructionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock(SILParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAction(SILParser::ActionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression_list(SILParser::Expression_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_elif_else(SILParser::If_elif_elseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhile_loop(SILParser::While_loopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParenthesis_expression(SILParser::Parenthesis_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultiplication_division_modulo(SILParser::Multiplication_division_moduloContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable_modulo(SILParser::Variable_moduloContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPre_incrementation(SILParser::Pre_incrementationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComparison(SILParser::ComparisonContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOr(SILParser::OrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAtomic_value(SILParser::Atomic_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEquality_difference(SILParser::Equality_differenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_call(SILParser::Function_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable_multiplication(SILParser::Variable_multiplicationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnary_minus(SILParser::Unary_minusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPost_incrementation(SILParser::Post_incrementationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable_division(SILParser::Variable_divisionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPre_decrementation(SILParser::Pre_decrementationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCast(SILParser::CastContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNot(SILParser::NotContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAddition_substraction(SILParser::Addition_substractionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable_substraction(SILParser::Variable_substractionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable_affectation(SILParser::Variable_affectationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAnd(SILParser::AndContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPower(SILParser::PowerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable_power(SILParser::Variable_powerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable_addition(SILParser::Variable_additionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPost_decrementation(SILParser::Post_decrementationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAtom(SILParser::AtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValue_expression(SILParser::Value_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSpecial_value_expression(SILParser::Special_value_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_declaration(SILParser::Function_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameter_list(SILParser::Parameter_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable_declaration(SILParser::Variable_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable_creation(SILParser::Variable_creationContext *ctx) override {
    return visitChildren(ctx);
  }


};

