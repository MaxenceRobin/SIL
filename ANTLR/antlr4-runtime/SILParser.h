
// Generated from d:\Programmes\Qt\Projets\SIL\SIL\ANTLR\SIL.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  SILParser : public antlr4::Parser {
public:
  enum {
    FUNCTION = 1, VAR = 2, CONST = 3, RETURN = 4, WHILE = 5, OUT = 6, IN = 7, 
    IF = 8, ELIF = 9, ELSE = 10, TRUE = 11, FALSE = 12, PAUSE = 13, RANDOM = 14, 
    NEWLINE = 15, TYPE = 16, L_PAR = 17, R_PAR = 18, L_BRACKET = 19, R_BRACKET = 20, 
    PLUS = 21, MINUS = 22, STAR = 23, SLASH = 24, PERCENT = 25, POWER = 26, 
    SEP = 27, S_QUOTE = 28, D_QUOTE = 29, AFF = 30, EQU = 31, DIF = 32, 
    LT = 33, GT = 34, LEQ = 35, GEQ = 36, INC = 37, DEC = 38, POW_AFF = 39, 
    PLS_AFF = 40, SUB_AFF = 41, TME_AFF = 42, DIV_AFF = 43, MOD_AFF = 44, 
    DOT = 45, COMMA = 46, SEMICOLON = 47, UNDERSCORE = 48, OR = 49, AND = 50, 
    NOT = 51, DOLLAR = 52, Number = 53, Id = 54, String = 55, Newline = 56, 
    Whitespace = 57, Single_comment = 58, Multi_comment = 59
  };

  enum {
    RuleFile = 0, RuleInstruction_list = 1, RuleInstruction = 2, RuleBlock = 3, 
    RuleAction = 4, RuleExpression_list = 5, RuleIf_elif_else = 6, RuleWhile_loop = 7, 
    RuleExpression = 8, RuleAtom = 9, RuleValue_expression = 10, RuleSpecial_value_expression = 11, 
    RuleFunction_declaration = 12, RuleParameter_list = 13, RuleVariable_declaration = 14, 
    RuleVariable_creation = 15
  };

  SILParser(antlr4::TokenStream *input);
  ~SILParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class FileContext;
  class Instruction_listContext;
  class InstructionContext;
  class BlockContext;
  class ActionContext;
  class Expression_listContext;
  class If_elif_elseContext;
  class While_loopContext;
  class ExpressionContext;
  class AtomContext;
  class Value_expressionContext;
  class Special_value_expressionContext;
  class Function_declarationContext;
  class Parameter_listContext;
  class Variable_declarationContext;
  class Variable_creationContext; 

  class  FileContext : public antlr4::ParserRuleContext {
  public:
    FileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Instruction_listContext *instruction_list();
    antlr4::tree::TerminalNode *EOF();
    antlr4::tree::TerminalNode *Newline();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FileContext* file();

  class  Instruction_listContext : public antlr4::ParserRuleContext {
  public:
    SILParser::InstructionContext *instructionContext = nullptr;;
    std::vector<InstructionContext *> instructions;;
    Instruction_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Newline();
    antlr4::tree::TerminalNode* Newline(size_t i);
    std::vector<InstructionContext *> instruction();
    InstructionContext* instruction(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Instruction_listContext* instruction_list();

  class  InstructionContext : public antlr4::ParserRuleContext {
  public:
    InstructionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();
    ActionContext *action();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InstructionContext* instruction();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_BRACKET();
    Instruction_listContext *instruction_list();
    antlr4::tree::TerminalNode *R_BRACKET();
    antlr4::tree::TerminalNode *Newline();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockContext* block();

  class  ActionContext : public antlr4::ParserRuleContext {
  public:
    ActionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OUT();
    Expression_listContext *expression_list();
    antlr4::tree::TerminalNode *PAUSE();
    If_elif_elseContext *if_elif_else();
    While_loopContext *while_loop();
    Variable_creationContext *variable_creation();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ActionContext* action();

  class  Expression_listContext : public antlr4::ParserRuleContext {
  public:
    SILParser::ExpressionContext *expressionContext = nullptr;;
    std::vector<ExpressionContext *> expressions;;
    Expression_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expression_listContext* expression_list();

  class  If_elif_elseContext : public antlr4::ParserRuleContext {
  public:
    SILParser::ExpressionContext *if_condition = nullptr;;
    SILParser::InstructionContext *if_instruction = nullptr;;
    SILParser::ExpressionContext *expressionContext = nullptr;;
    std::vector<ExpressionContext *> elif_condition;;
    SILParser::InstructionContext *instructionContext = nullptr;;
    std::vector<InstructionContext *> elif_instruction;;
    SILParser::InstructionContext *else_instruction = nullptr;;
    If_elif_elseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<InstructionContext *> instruction();
    InstructionContext* instruction(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Newline();
    antlr4::tree::TerminalNode* Newline(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ELIF();
    antlr4::tree::TerminalNode* ELIF(size_t i);
    antlr4::tree::TerminalNode *ELSE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_elif_elseContext* if_elif_else();

  class  While_loopContext : public antlr4::ParserRuleContext {
  public:
    While_loopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    ExpressionContext *expression();
    InstructionContext *instruction();
    antlr4::tree::TerminalNode *Newline();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  While_loopContext* while_loop();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExpressionContext() : antlr4::ParserRuleContext() { }
    void copyFrom(ExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Multiplication_division_moduloContext : public ExpressionContext {
  public:
    Multiplication_division_moduloContext(ExpressionContext *ctx);

    antlr4::Token *starToken = nullptr;
    std::vector<antlr4::Token *> op;
    antlr4::Token *slashToken = nullptr;
    antlr4::Token *percentToken = nullptr;
    antlr4::Token *_tset324 = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *SLASH();
    antlr4::tree::TerminalNode *PERCENT();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Variable_moduloContext : public ExpressionContext {
  public:
    Variable_moduloContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *Id();
    antlr4::tree::TerminalNode *MOD_AFF();
    ExpressionContext *expression();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Pre_incrementationContext : public ExpressionContext {
  public:
    Pre_incrementationContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *INC();
    ExpressionContext *expression();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ComparisonContext : public ExpressionContext {
  public:
    ComparisonContext(ExpressionContext *ctx);

    antlr4::Token *ltToken = nullptr;
    std::vector<antlr4::Token *> op;
    antlr4::Token *leqToken = nullptr;
    antlr4::Token *gtToken = nullptr;
    antlr4::Token *geqToken = nullptr;
    antlr4::Token *_tset407 = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *LEQ();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *GEQ();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OrContext : public ExpressionContext {
  public:
    OrContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *OR();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Atomic_valueContext : public ExpressionContext {
  public:
    Atomic_valueContext(ExpressionContext *ctx);

    AtomContext *atom();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Equality_differenceContext : public ExpressionContext {
  public:
    Equality_differenceContext(ExpressionContext *ctx);

    antlr4::Token *equToken = nullptr;
    std::vector<antlr4::Token *> op;
    antlr4::Token *difToken = nullptr;
    antlr4::Token *_tset459 = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *EQU();
    antlr4::tree::TerminalNode *DIF();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Function_callContext : public ExpressionContext {
  public:
    Function_callContext(ExpressionContext *ctx);

    ExpressionContext *expression();
    antlr4::tree::TerminalNode *L_PAR();
    Expression_listContext *expression_list();
    antlr4::tree::TerminalNode *R_PAR();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Variable_multiplicationContext : public ExpressionContext {
  public:
    Variable_multiplicationContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *Id();
    antlr4::tree::TerminalNode *TME_AFF();
    ExpressionContext *expression();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Unary_minusContext : public ExpressionContext {
  public:
    Unary_minusContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *MINUS();
    ExpressionContext *expression();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Post_incrementationContext : public ExpressionContext {
  public:
    Post_incrementationContext(ExpressionContext *ctx);

    ExpressionContext *expression();
    antlr4::tree::TerminalNode *INC();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Variable_divisionContext : public ExpressionContext {
  public:
    Variable_divisionContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *Id();
    antlr4::tree::TerminalNode *DIV_AFF();
    ExpressionContext *expression();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Pre_decrementationContext : public ExpressionContext {
  public:
    Pre_decrementationContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *DEC();
    ExpressionContext *expression();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CastContext : public ExpressionContext {
  public:
    CastContext(ExpressionContext *ctx);

    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SEP();
    antlr4::tree::TerminalNode *TYPE();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NotContext : public ExpressionContext {
  public:
    NotContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *NOT();
    ExpressionContext *expression();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Addition_substractionContext : public ExpressionContext {
  public:
    Addition_substractionContext(ExpressionContext *ctx);

    antlr4::Token *plusToken = nullptr;
    std::vector<antlr4::Token *> op;
    antlr4::Token *minusToken = nullptr;
    antlr4::Token *_tset369 = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Variable_substractionContext : public ExpressionContext {
  public:
    Variable_substractionContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *Id();
    antlr4::tree::TerminalNode *SUB_AFF();
    ExpressionContext *expression();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Variable_affectationContext : public ExpressionContext {
  public:
    Variable_affectationContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *Id();
    antlr4::tree::TerminalNode *AFF();
    ExpressionContext *expression();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AndContext : public ExpressionContext {
  public:
    AndContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *AND();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PowerContext : public ExpressionContext {
  public:
    PowerContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *POWER();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Variable_powerContext : public ExpressionContext {
  public:
    Variable_powerContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *Id();
    antlr4::tree::TerminalNode *POW_AFF();
    ExpressionContext *expression();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Variable_additionContext : public ExpressionContext {
  public:
    Variable_additionContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *Id();
    antlr4::tree::TerminalNode *PLS_AFF();
    ExpressionContext *expression();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Post_decrementationContext : public ExpressionContext {
  public:
    Post_decrementationContext(ExpressionContext *ctx);

    ExpressionContext *expression();
    antlr4::tree::TerminalNode *DEC();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  AtomContext : public antlr4::ParserRuleContext {
  public:
    AtomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Value_expressionContext *value_expression();
    Special_value_expressionContext *special_value_expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AtomContext* atom();

  class  Value_expressionContext : public antlr4::ParserRuleContext {
  public:
    Value_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Number();
    antlr4::tree::TerminalNode *String();
    antlr4::tree::TerminalNode *Id();
    Function_declarationContext *function_declaration();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Value_expressionContext* value_expression();

  class  Special_value_expressionContext : public antlr4::ParserRuleContext {
  public:
    Special_value_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *RANDOM();
    antlr4::tree::TerminalNode *NEWLINE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Special_value_expressionContext* special_value_expression();

  class  Function_declarationContext : public antlr4::ParserRuleContext {
  public:
    Function_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *Id();
    antlr4::tree::TerminalNode *L_PAR();
    Parameter_listContext *parameter_list();
    antlr4::tree::TerminalNode *R_PAR();
    BlockContext *block();
    antlr4::tree::TerminalNode *Newline();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_declarationContext* function_declaration();

  class  Parameter_listContext : public antlr4::ParserRuleContext {
  public:
    Parameter_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Variable_declarationContext *> variable_declaration();
    Variable_declarationContext* variable_declaration(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parameter_listContext* parameter_list();

  class  Variable_declarationContext : public antlr4::ParserRuleContext {
  public:
    Variable_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Id();
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *CONST();
    antlr4::tree::TerminalNode *SEP();
    antlr4::tree::TerminalNode *TYPE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_declarationContext* variable_declaration();

  class  Variable_creationContext : public antlr4::ParserRuleContext {
  public:
    Variable_creationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_declarationContext *variable_declaration();
    antlr4::tree::TerminalNode *AFF();
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_creationContext* variable_creation();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};
