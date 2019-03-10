
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
    NOT = 51, DOLLAR = 52, Q_MARK = 53, PIPE = 54, INTEGER_PART = 55, DECIMAL_PART = 56, 
    Id = 57, String = 58, Newline = 59, Whitespace = 60, Single_comment = 61, 
    Multi_comment = 62
  };

  enum {
    RuleFile = 0, RuleInstruction_list = 1, RuleInstruction = 2, RuleBlock = 3, 
    RuleAction = 4, RuleExpression_list = 5, RuleIf_else = 6, RuleWhile_loop = 7, 
    RuleExpression = 8, RuleAtom = 9, RuleValue_expression = 10, RuleNumber = 11, 
    RuleSpecial_value_expression = 12, RuleFunction_declaration = 13, RuleParameter_list = 14, 
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
  class If_elseContext;
  class While_loopContext;
  class ExpressionContext;
  class AtomContext;
  class Value_expressionContext;
  class NumberContext;
  class Special_value_expressionContext;
  class Function_declarationContext;
  class Parameter_listContext;
  class Variable_creationContext; 

  class  FileContext : public antlr4::ParserRuleContext {
  public:
    FileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Instruction_listContext *instruction_list();
    antlr4::tree::TerminalNode *EOF();
    std::vector<antlr4::tree::TerminalNode *> Newline();
    antlr4::tree::TerminalNode* Newline(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FileContext* file();

  class  Instruction_listContext : public antlr4::ParserRuleContext {
  public:
    SILParser::InstructionContext *instructionContext = nullptr;;
    std::vector<InstructionContext *> instructions;;
    Instruction_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<InstructionContext *> instruction();
    InstructionContext* instruction(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Newline();
    antlr4::tree::TerminalNode* Newline(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);

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
    std::vector<antlr4::tree::TerminalNode *> Newline();
    antlr4::tree::TerminalNode* Newline(size_t i);

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
    If_elseContext *if_else();
    While_loopContext *while_loop();
    Variable_creationContext *variable_creation();
    ExpressionContext *expression();

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

  class  If_elseContext : public antlr4::ParserRuleContext {
  public:
    SILParser::ExpressionContext *if_condition = nullptr;;
    SILParser::InstructionContext *if_instruction = nullptr;;
    SILParser::InstructionContext *else_instruction = nullptr;;
    If_elseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    ExpressionContext *expression();
    std::vector<InstructionContext *> instruction();
    InstructionContext* instruction(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Newline();
    antlr4::tree::TerminalNode* Newline(size_t i);
    antlr4::tree::TerminalNode *ELSE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_elseContext* if_else();

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

  class  Variable_moduloContext : public ExpressionContext {
  public:
    Variable_moduloContext(ExpressionContext *ctx);

    SILParser::ExpressionContext *ID = nullptr;
    SILParser::ExpressionContext *value = nullptr;
    antlr4::tree::TerminalNode *MOD_AFF();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Atomic_valueContext : public ExpressionContext {
  public:
    Atomic_valueContext(ExpressionContext *ctx);

    AtomContext *atom();
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

    SILParser::ExpressionContext *ID = nullptr;
    SILParser::ExpressionContext *value = nullptr;
    antlr4::tree::TerminalNode *TME_AFF();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Unary_minusContext : public ExpressionContext {
  public:
    Unary_minusContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *MINUS();
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

    SILParser::ExpressionContext *left = nullptr;
    SILParser::ExpressionContext *right = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Variable_substractionContext : public ExpressionContext {
  public:
    Variable_substractionContext(ExpressionContext *ctx);

    SILParser::ExpressionContext *ID = nullptr;
    SILParser::ExpressionContext *value = nullptr;
    antlr4::tree::TerminalNode *SUB_AFF();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AndContext : public ExpressionContext {
  public:
    AndContext(ExpressionContext *ctx);

    SILParser::ExpressionContext *left = nullptr;
    SILParser::ExpressionContext *right = nullptr;
    antlr4::tree::TerminalNode *AND();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PowerContext : public ExpressionContext {
  public:
    PowerContext(ExpressionContext *ctx);

    SILParser::ExpressionContext *left = nullptr;
    SILParser::ExpressionContext *right = nullptr;
    antlr4::tree::TerminalNode *POWER();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Variable_powerContext : public ExpressionContext {
  public:
    Variable_powerContext(ExpressionContext *ctx);

    SILParser::ExpressionContext *ID = nullptr;
    SILParser::ExpressionContext *value = nullptr;
    antlr4::tree::TerminalNode *POW_AFF();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Post_decrementationContext : public ExpressionContext {
  public:
    Post_decrementationContext(ExpressionContext *ctx);

    ExpressionContext *expression();
    antlr4::tree::TerminalNode *DEC();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Parenthesis_expressionContext : public ExpressionContext {
  public:
    Parenthesis_expressionContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *L_PAR();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *R_PAR();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Multiplication_division_moduloContext : public ExpressionContext {
  public:
    Multiplication_division_moduloContext(ExpressionContext *ctx);

    SILParser::ExpressionContext *left = nullptr;
    SILParser::ExpressionContext *right = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *SLASH();
    antlr4::tree::TerminalNode *PERCENT();
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

    SILParser::ExpressionContext *left = nullptr;
    SILParser::ExpressionContext *right = nullptr;
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

    SILParser::ExpressionContext *left = nullptr;
    SILParser::ExpressionContext *right = nullptr;
    antlr4::tree::TerminalNode *OR();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Equality_differenceContext : public ExpressionContext {
  public:
    Equality_differenceContext(ExpressionContext *ctx);

    SILParser::ExpressionContext *left = nullptr;
    SILParser::ExpressionContext *right = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *EQU();
    antlr4::tree::TerminalNode *DIF();
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

    SILParser::ExpressionContext *ID = nullptr;
    SILParser::ExpressionContext *value = nullptr;
    antlr4::tree::TerminalNode *DIV_AFF();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Pre_decrementationContext : public ExpressionContext {
  public:
    Pre_decrementationContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *DEC();
    ExpressionContext *expression();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Variable_affectationContext : public ExpressionContext {
  public:
    Variable_affectationContext(ExpressionContext *ctx);

    SILParser::ExpressionContext *ID = nullptr;
    SILParser::ExpressionContext *value = nullptr;
    antlr4::tree::TerminalNode *AFF();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Variable_additionContext : public ExpressionContext {
  public:
    Variable_additionContext(ExpressionContext *ctx);

    SILParser::ExpressionContext *ID = nullptr;
    SILParser::ExpressionContext *value = nullptr;
    antlr4::tree::TerminalNode *PLS_AFF();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TernaryContext : public ExpressionContext {
  public:
    TernaryContext(ExpressionContext *ctx);

    SILParser::ExpressionContext *condition = nullptr;
    SILParser::ExpressionContext *first = nullptr;
    SILParser::ExpressionContext *second = nullptr;
    antlr4::tree::TerminalNode *Q_MARK();
    antlr4::tree::TerminalNode *PIPE();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
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
    NumberContext *number();
    antlr4::tree::TerminalNode *String();
    antlr4::tree::TerminalNode *Id();
    Function_declarationContext *function_declaration();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Value_expressionContext* value_expression();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER_PART();
    antlr4::tree::TerminalNode *DECIMAL_PART();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumberContext* number();

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
    std::vector<Variable_creationContext *> variable_creation();
    Variable_creationContext* variable_creation(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parameter_listContext* parameter_list();

  class  Variable_creationContext : public antlr4::ParserRuleContext {
  public:
    Variable_creationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Id();
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *CONST();
    antlr4::tree::TerminalNode *SEP();
    antlr4::tree::TerminalNode *TYPE();
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

