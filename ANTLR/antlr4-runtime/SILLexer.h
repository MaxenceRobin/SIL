
// Generated from d:\Programmes\Qt\Projets\SIL\SIL\ANTLR\SIL.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  SILLexer : public antlr4::Lexer {
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

  SILLexer(antlr4::CharStream *input);
  ~SILLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

