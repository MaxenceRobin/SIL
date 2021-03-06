
// Generated from d:\Programmes\Qt\Projets\SIL\SIL\ANTLR\SIL.g4 by ANTLR 4.7.1


#include "SILVisitor.h"

#include "SILParser.h"


using namespace antlrcpp;
using namespace antlr4;

SILParser::SILParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

SILParser::~SILParser() {
  delete _interpreter;
}

std::string SILParser::getGrammarFileName() const {
  return "SIL.g4";
}

const std::vector<std::string>& SILParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& SILParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- FileContext ------------------------------------------------------------------

SILParser::FileContext::FileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SILParser::Instruction_listContext* SILParser::FileContext::instruction_list() {
  return getRuleContext<SILParser::Instruction_listContext>(0);
}

tree::TerminalNode* SILParser::FileContext::EOF() {
  return getToken(SILParser::EOF, 0);
}

std::vector<tree::TerminalNode *> SILParser::FileContext::Newline() {
  return getTokens(SILParser::Newline);
}

tree::TerminalNode* SILParser::FileContext::Newline(size_t i) {
  return getToken(SILParser::Newline, i);
}


size_t SILParser::FileContext::getRuleIndex() const {
  return SILParser::RuleFile;
}

antlrcpp::Any SILParser::FileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SILVisitor*>(visitor))
    return parserVisitor->visitFile(this);
  else
    return visitor->visitChildren(this);
}

SILParser::FileContext* SILParser::file() {
  FileContext *_localctx = _tracker.createInstance<FileContext>(_ctx, getState());
  enterRule(_localctx, 0, SILParser::RuleFile);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(33);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      setState(32);
      match(SILParser::Newline);
      break;
    }

    }
    setState(35);
    instruction_list();
    setState(37);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SILParser::Newline) {
      setState(36);
      match(SILParser::Newline);
    }
    setState(39);
    match(SILParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Instruction_listContext ------------------------------------------------------------------

SILParser::Instruction_listContext::Instruction_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SILParser::InstructionContext *> SILParser::Instruction_listContext::instruction() {
  return getRuleContexts<SILParser::InstructionContext>();
}

SILParser::InstructionContext* SILParser::Instruction_listContext::instruction(size_t i) {
  return getRuleContext<SILParser::InstructionContext>(i);
}

std::vector<tree::TerminalNode *> SILParser::Instruction_listContext::Newline() {
  return getTokens(SILParser::Newline);
}

tree::TerminalNode* SILParser::Instruction_listContext::Newline(size_t i) {
  return getToken(SILParser::Newline, i);
}

std::vector<tree::TerminalNode *> SILParser::Instruction_listContext::SEMICOLON() {
  return getTokens(SILParser::SEMICOLON);
}

tree::TerminalNode* SILParser::Instruction_listContext::SEMICOLON(size_t i) {
  return getToken(SILParser::SEMICOLON, i);
}


size_t SILParser::Instruction_listContext::getRuleIndex() const {
  return SILParser::RuleInstruction_list;
}

antlrcpp::Any SILParser::Instruction_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SILVisitor*>(visitor))
    return parserVisitor->visitInstruction_list(this);
  else
    return visitor->visitChildren(this);
}

SILParser::Instruction_listContext* SILParser::instruction_list() {
  Instruction_listContext *_localctx = _tracker.createInstance<Instruction_listContext>(_ctx, getState());
  enterRule(_localctx, 2, SILParser::RuleInstruction_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(41);
    dynamic_cast<Instruction_listContext *>(_localctx)->instructionContext = instruction();
    dynamic_cast<Instruction_listContext *>(_localctx)->instructions.push_back(dynamic_cast<Instruction_listContext *>(_localctx)->instructionContext);
    setState(46);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(42);
        _la = _input->LA(1);
        if (!(_la == SILParser::SEMICOLON

        || _la == SILParser::Newline)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(43);
        dynamic_cast<Instruction_listContext *>(_localctx)->instructionContext = instruction();
        dynamic_cast<Instruction_listContext *>(_localctx)->instructions.push_back(dynamic_cast<Instruction_listContext *>(_localctx)->instructionContext); 
      }
      setState(48);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstructionContext ------------------------------------------------------------------

SILParser::InstructionContext::InstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SILParser::BlockContext* SILParser::InstructionContext::block() {
  return getRuleContext<SILParser::BlockContext>(0);
}

SILParser::ActionContext* SILParser::InstructionContext::action() {
  return getRuleContext<SILParser::ActionContext>(0);
}


size_t SILParser::InstructionContext::getRuleIndex() const {
  return SILParser::RuleInstruction;
}

antlrcpp::Any SILParser::InstructionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SILVisitor*>(visitor))
    return parserVisitor->visitInstruction(this);
  else
    return visitor->visitChildren(this);
}

SILParser::InstructionContext* SILParser::instruction() {
  InstructionContext *_localctx = _tracker.createInstance<InstructionContext>(_ctx, getState());
  enterRule(_localctx, 4, SILParser::RuleInstruction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(52);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SILParser::L_BRACKET: {
        enterOuterAlt(_localctx, 1);
        setState(49);
        block();
        break;
      }

      case SILParser::FUNCTION:
      case SILParser::VAR:
      case SILParser::CONST:
      case SILParser::WHILE:
      case SILParser::OUT:
      case SILParser::IN:
      case SILParser::IF:
      case SILParser::TRUE:
      case SILParser::FALSE:
      case SILParser::PAUSE:
      case SILParser::RANDOM:
      case SILParser::NEWLINE:
      case SILParser::L_PAR:
      case SILParser::MINUS:
      case SILParser::INC:
      case SILParser::DEC:
      case SILParser::NOT:
      case SILParser::INTEGER_PART:
      case SILParser::Id:
      case SILParser::String: {
        enterOuterAlt(_localctx, 2);
        setState(50);
        action();
        break;
      }

      case SILParser::EOF:
      case SILParser::ELSE:
      case SILParser::R_BRACKET:
      case SILParser::SEMICOLON:
      case SILParser::Newline: {
        enterOuterAlt(_localctx, 3);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

SILParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SILParser::BlockContext::L_BRACKET() {
  return getToken(SILParser::L_BRACKET, 0);
}

SILParser::Instruction_listContext* SILParser::BlockContext::instruction_list() {
  return getRuleContext<SILParser::Instruction_listContext>(0);
}

tree::TerminalNode* SILParser::BlockContext::R_BRACKET() {
  return getToken(SILParser::R_BRACKET, 0);
}

std::vector<tree::TerminalNode *> SILParser::BlockContext::Newline() {
  return getTokens(SILParser::Newline);
}

tree::TerminalNode* SILParser::BlockContext::Newline(size_t i) {
  return getToken(SILParser::Newline, i);
}


size_t SILParser::BlockContext::getRuleIndex() const {
  return SILParser::RuleBlock;
}

antlrcpp::Any SILParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SILVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

SILParser::BlockContext* SILParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 6, SILParser::RuleBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(54);
    match(SILParser::L_BRACKET);
    setState(56);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      setState(55);
      match(SILParser::Newline);
      break;
    }

    }
    setState(58);
    instruction_list();
    setState(60);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SILParser::Newline) {
      setState(59);
      match(SILParser::Newline);
    }
    setState(62);
    match(SILParser::R_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ActionContext ------------------------------------------------------------------

SILParser::ActionContext::ActionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SILParser::ActionContext::OUT() {
  return getToken(SILParser::OUT, 0);
}

SILParser::Expression_listContext* SILParser::ActionContext::expression_list() {
  return getRuleContext<SILParser::Expression_listContext>(0);
}

tree::TerminalNode* SILParser::ActionContext::PAUSE() {
  return getToken(SILParser::PAUSE, 0);
}

SILParser::If_elseContext* SILParser::ActionContext::if_else() {
  return getRuleContext<SILParser::If_elseContext>(0);
}

SILParser::While_loopContext* SILParser::ActionContext::while_loop() {
  return getRuleContext<SILParser::While_loopContext>(0);
}

SILParser::Variable_creationContext* SILParser::ActionContext::variable_creation() {
  return getRuleContext<SILParser::Variable_creationContext>(0);
}

SILParser::ExpressionContext* SILParser::ActionContext::expression() {
  return getRuleContext<SILParser::ExpressionContext>(0);
}


size_t SILParser::ActionContext::getRuleIndex() const {
  return SILParser::RuleAction;
}

antlrcpp::Any SILParser::ActionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SILVisitor*>(visitor))
    return parserVisitor->visitAction(this);
  else
    return visitor->visitChildren(this);
}

SILParser::ActionContext* SILParser::action() {
  ActionContext *_localctx = _tracker.createInstance<ActionContext>(_ctx, getState());
  enterRule(_localctx, 8, SILParser::RuleAction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(71);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SILParser::OUT: {
        enterOuterAlt(_localctx, 1);
        setState(64);
        match(SILParser::OUT);
        setState(65);
        expression_list();
        break;
      }

      case SILParser::PAUSE: {
        enterOuterAlt(_localctx, 2);
        setState(66);
        match(SILParser::PAUSE);
        break;
      }

      case SILParser::IF: {
        enterOuterAlt(_localctx, 3);
        setState(67);
        if_else();
        break;
      }

      case SILParser::WHILE: {
        enterOuterAlt(_localctx, 4);
        setState(68);
        while_loop();
        break;
      }

      case SILParser::VAR:
      case SILParser::CONST: {
        enterOuterAlt(_localctx, 5);
        setState(69);
        variable_creation();
        break;
      }

      case SILParser::FUNCTION:
      case SILParser::IN:
      case SILParser::TRUE:
      case SILParser::FALSE:
      case SILParser::RANDOM:
      case SILParser::NEWLINE:
      case SILParser::L_PAR:
      case SILParser::MINUS:
      case SILParser::INC:
      case SILParser::DEC:
      case SILParser::NOT:
      case SILParser::INTEGER_PART:
      case SILParser::Id:
      case SILParser::String: {
        enterOuterAlt(_localctx, 6);
        setState(70);
        expression(0);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expression_listContext ------------------------------------------------------------------

SILParser::Expression_listContext::Expression_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SILParser::ExpressionContext *> SILParser::Expression_listContext::expression() {
  return getRuleContexts<SILParser::ExpressionContext>();
}

SILParser::ExpressionContext* SILParser::Expression_listContext::expression(size_t i) {
  return getRuleContext<SILParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> SILParser::Expression_listContext::COMMA() {
  return getTokens(SILParser::COMMA);
}

tree::TerminalNode* SILParser::Expression_listContext::COMMA(size_t i) {
  return getToken(SILParser::COMMA, i);
}


size_t SILParser::Expression_listContext::getRuleIndex() const {
  return SILParser::RuleExpression_list;
}

antlrcpp::Any SILParser::Expression_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SILVisitor*>(visitor))
    return parserVisitor->visitExpression_list(this);
  else
    return visitor->visitChildren(this);
}

SILParser::Expression_listContext* SILParser::expression_list() {
  Expression_listContext *_localctx = _tracker.createInstance<Expression_listContext>(_ctx, getState());
  enterRule(_localctx, 10, SILParser::RuleExpression_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(81);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SILParser::FUNCTION)
      | (1ULL << SILParser::IN)
      | (1ULL << SILParser::TRUE)
      | (1ULL << SILParser::FALSE)
      | (1ULL << SILParser::RANDOM)
      | (1ULL << SILParser::NEWLINE)
      | (1ULL << SILParser::L_PAR)
      | (1ULL << SILParser::MINUS)
      | (1ULL << SILParser::INC)
      | (1ULL << SILParser::DEC)
      | (1ULL << SILParser::NOT)
      | (1ULL << SILParser::INTEGER_PART)
      | (1ULL << SILParser::Id)
      | (1ULL << SILParser::String))) != 0)) {
      setState(73);
      dynamic_cast<Expression_listContext *>(_localctx)->expressionContext = expression(0);
      dynamic_cast<Expression_listContext *>(_localctx)->expressions.push_back(dynamic_cast<Expression_listContext *>(_localctx)->expressionContext);
      setState(78);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SILParser::COMMA) {
        setState(74);
        match(SILParser::COMMA);
        setState(75);
        dynamic_cast<Expression_listContext *>(_localctx)->expressionContext = expression(0);
        dynamic_cast<Expression_listContext *>(_localctx)->expressions.push_back(dynamic_cast<Expression_listContext *>(_localctx)->expressionContext);
        setState(80);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_elseContext ------------------------------------------------------------------

SILParser::If_elseContext::If_elseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SILParser::If_elseContext::IF() {
  return getToken(SILParser::IF, 0);
}

SILParser::ExpressionContext* SILParser::If_elseContext::expression() {
  return getRuleContext<SILParser::ExpressionContext>(0);
}

std::vector<SILParser::InstructionContext *> SILParser::If_elseContext::instruction() {
  return getRuleContexts<SILParser::InstructionContext>();
}

SILParser::InstructionContext* SILParser::If_elseContext::instruction(size_t i) {
  return getRuleContext<SILParser::InstructionContext>(i);
}

std::vector<tree::TerminalNode *> SILParser::If_elseContext::Newline() {
  return getTokens(SILParser::Newline);
}

tree::TerminalNode* SILParser::If_elseContext::Newline(size_t i) {
  return getToken(SILParser::Newline, i);
}

tree::TerminalNode* SILParser::If_elseContext::ELSE() {
  return getToken(SILParser::ELSE, 0);
}


size_t SILParser::If_elseContext::getRuleIndex() const {
  return SILParser::RuleIf_else;
}

antlrcpp::Any SILParser::If_elseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SILVisitor*>(visitor))
    return parserVisitor->visitIf_else(this);
  else
    return visitor->visitChildren(this);
}

SILParser::If_elseContext* SILParser::if_else() {
  If_elseContext *_localctx = _tracker.createInstance<If_elseContext>(_ctx, getState());
  enterRule(_localctx, 12, SILParser::RuleIf_else);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(83);
    match(SILParser::IF);
    setState(84);
    dynamic_cast<If_elseContext *>(_localctx)->if_condition = expression(0);
    setState(86);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      setState(85);
      match(SILParser::Newline);
      break;
    }

    }
    setState(88);
    dynamic_cast<If_elseContext *>(_localctx)->if_instruction = instruction();
    setState(90);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      setState(89);
      match(SILParser::Newline);
      break;
    }

    }
    setState(97);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      setState(92);
      match(SILParser::ELSE);
      setState(94);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
      case 1: {
        setState(93);
        match(SILParser::Newline);
        break;
      }

      }
      setState(96);
      dynamic_cast<If_elseContext *>(_localctx)->else_instruction = instruction();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- While_loopContext ------------------------------------------------------------------

SILParser::While_loopContext::While_loopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SILParser::While_loopContext::WHILE() {
  return getToken(SILParser::WHILE, 0);
}

SILParser::ExpressionContext* SILParser::While_loopContext::expression() {
  return getRuleContext<SILParser::ExpressionContext>(0);
}

SILParser::InstructionContext* SILParser::While_loopContext::instruction() {
  return getRuleContext<SILParser::InstructionContext>(0);
}

tree::TerminalNode* SILParser::While_loopContext::Newline() {
  return getToken(SILParser::Newline, 0);
}


size_t SILParser::While_loopContext::getRuleIndex() const {
  return SILParser::RuleWhile_loop;
}

antlrcpp::Any SILParser::While_loopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SILVisitor*>(visitor))
    return parserVisitor->visitWhile_loop(this);
  else
    return visitor->visitChildren(this);
}

SILParser::While_loopContext* SILParser::while_loop() {
  While_loopContext *_localctx = _tracker.createInstance<While_loopContext>(_ctx, getState());
  enterRule(_localctx, 14, SILParser::RuleWhile_loop);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(99);
    match(SILParser::WHILE);
    setState(100);
    expression(0);
    setState(102);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      setState(101);
      match(SILParser::Newline);
      break;
    }

    }
    setState(104);
    instruction();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

SILParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SILParser::ExpressionContext::getRuleIndex() const {
  return SILParser::RuleExpression;
}

void SILParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Variable_moduloContext ------------------------------------------------------------------

tree::TerminalNode* SILParser::Variable_moduloContext::MOD_AFF() {
  return getToken(SILParser::MOD_AFF, 0);
}

std::vector<SILParser::ExpressionContext *> SILParser::Variable_moduloContext::expression() {
  return getRuleContexts<SILParser::ExpressionContext>();
}

SILParser::ExpressionContext* SILParser::Variable_moduloContext::expression(size_t i) {
  return getRuleContext<SILParser::ExpressionContext>(i);
}

SILParser::Variable_moduloContext::Variable_moduloContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any SILParser::Variable_moduloContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SILVisitor*>(visitor))
    return parserVisitor->visitVariable_modulo(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Atomic_valueContext ------------------------------------------------------------------

SILParser::AtomContext* SILParser::Atomic_valueContext::atom() {
  return getRuleContext<SILParser::AtomContext>(0);
}

SILParser::Atomic_valueContext::Atomic_valueContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any SILParser::Atomic_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SILVisitor*>(visitor))
    return parserVisitor->visitAtomic_value(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Function_callContext ------------------------------------------------------------------

SILParser::ExpressionContext* SILParser::Function_callContext::expression() {
  return getRuleContext<SILParser::ExpressionContext>(0);
}

tree::TerminalNode* SILParser::Function_callContext::L_PAR() {
  return getToken(SILParser::L_PAR, 0);
}

SILParser::Expression_listContext* SILParser::Function_callContext::expression_list() {
  return getRuleContext<SILParser::Expression_listContext>(0);
}

tree::TerminalNode* SILParser::Function_callContext::R_PAR() {
  return getToken(SILParser::R_PAR, 0);
}

SILParser::Function_callContext::Function_callContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any SILParser::Function_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SILVisitor*>(visitor))
    return parserVisitor->visitFunction_call(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Variable_multiplicationContext ------------------------------------------------------------------

tree::TerminalNode* SILParser::Variable_multiplicationContext::TME_AFF() {
  return getToken(SILParser::TME_AFF, 0);
}

std::vector<SILParser::ExpressionContext *> SILParser::Variable_multiplicationContext::expression() {
  return getRuleContexts<SILParser::ExpressionContext>();
}

SILParser::ExpressionContext* SILParser::Variable_multiplicationContext::expression(size_t i) {
  return getRuleContext<SILParser::ExpressionContext>(i);
}

SILParser::Variable_multiplicationContext::Variable_multiplicationContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any SILParser::Variable_multiplicationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SILVisitor*>(visitor))
    return parserVisitor->visitVariable_multiplication(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Unary_minusContext ------------------------------------------------------------------

tree::TerminalNode* SILParser::Unary_minusContext::MINUS() {
  return getToken(SILParser::MINUS, 0);
}

SILParser::ExpressionContext* SILParser::Unary_minusContext::expression() {
  return getRuleContext<SILParser::ExpressionContext>(0);
}

SILParser::Unary_minusContext::Unary_minusContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any SILParser::Unary_minusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SILVisitor*>(visitor))
    return parserVisitor->visitUnary_minus(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CastContext ------------------------------------------------------------------

SILParser::ExpressionContext* SILParser::CastContext::expression() {
  return getRuleContext<SILParser::ExpressionContext>(0);
}

tree::TerminalNode* SILParser::CastContext::SEP() {
  return getToken(SILParser::SEP, 0);
}

tree::TerminalNode* SILParser::CastContext::TYPE() {
  return getToken(SILParser::TYPE, 0);
}

SILParser::CastContext::CastContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any SILParser::CastContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SILVisitor*>(visitor))
    return parserVisitor->visitCast(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NotContext ------------------------------------------------------------------

tree::TerminalNode* SILParser::NotContext::NOT() {
  return getToken(SILParser::NOT, 0);
}

SILParser::ExpressionContext* SILParser::NotContext::expression() {
  return getRuleContext<SILParser::ExpressionContext>(0);
}

SILParser::NotContext::NotContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any SILParser::NotContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SILVisitor*>(visitor))
    return parserVisitor->visitNot(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Addition_substractionContext ------------------------------------------------------------------

std::vector<SILParser::ExpressionContext *> SILParser::Addition_substractionContext::expression() {
  return getRuleContexts<SILParser::ExpressionContext>();
}

SILParser::ExpressionContext* SILParser::Addition_substractionContext::expression(size_t i) {
  return getRuleContext<SILParser::ExpressionContext>(i);
}

tree::TerminalNode* SILParser::Addition_substractionContext::PLUS() {
  return getToken(SILParser::PLUS, 0);
}

tree::TerminalNode* SILParser::Addition_substractionContext::MINUS() {
  return getToken(SILParser::MINUS, 0);
}

SILParser::Addition_substractionContext::Addition_substractionContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any SILParser::Addition_substractionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SILVisitor*>(visitor))
    return parserVisitor->visitAddition_substraction(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Variable_substractionContext ------------------------------------------------------------------

tree::TerminalNode* SILParser::Variable_substractionContext::SUB_AFF() {
  return getToken(SILParser::SUB_AFF, 0);
}

std::vector<SILParser::ExpressionContext *> SILParser::Variable_substractionContext::expression() {
  return getRuleContexts<SILParser::ExpressionContext>();
}

SILParser::ExpressionContext* SILParser::Variable_substractionContext::expression(size_t i) {
  return getRuleContext<SILParser::ExpressionContext>(i);
}

SILParser::Variable_substractionContext::Variable_substractionContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any SILParser::Variable_substractionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SILVisitor*>(visitor))
    return parserVisitor->visitVariable_substraction(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AndContext ------------------------------------------------------------------

tree::TerminalNode* SILParser::AndContext::AND() {
  return getToken(SILParser::AND, 0);
}

std::vector<SILParser::ExpressionContext *> SILParser::AndContext::expression() {
  return getRuleContexts<SILParser::ExpressionContext>();
}

SILParser::ExpressionContext* SILParser::AndContext::expression(size_t i) {
  return getRuleContext<SILParser::ExpressionContext>(i);
}

SILParser::AndContext::AndContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any SILParser::AndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SILVisitor*>(visitor))
    return parserVisitor->visitAnd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PowerContext ------------------------------------------------------------------

tree::TerminalNode* SILParser::PowerContext::POWER() {
  return getToken(SILParser::POWER, 0);
}

std::vector<SILParser::ExpressionContext *> SILParser::PowerContext::expression() {
  return getRuleContexts<SILParser::ExpressionContext>();
}

SILParser::ExpressionContext* SILParser::PowerContext::expression(size_t i) {
  return getRuleContext<SILParser::ExpressionContext>(i);
}

SILParser::PowerContext::PowerContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any SILParser::PowerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SILVisitor*>(visitor))
    return parserVisitor->visitPower(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Variable_powerContext ------------------------------------------------------------------

tree::TerminalNode* SILParser::Variable_powerContext::POW_AFF() {
  return getToken(SILParser::POW_AFF, 0);
}

std::vector<SILParser::ExpressionContext *> SILParser::Variable_powerContext::expression() {
  return getRuleContexts<SILParser::ExpressionContext>();
}

SILParser::ExpressionContext* SILParser::Variable_powerContext::expression(size_t i) {
  return getRuleContext<SILParser::ExpressionContext>(i);
}

SILParser::Variable_powerContext::Variable_powerContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any SILParser::Variable_powerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SILVisitor*>(visitor))
    return parserVisitor->visitVariable_power(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Post_decrementationContext ------------------------------------------------------------------

SILParser::ExpressionContext* SILParser::Post_decrementationContext::expression() {
  return getRuleContext<SILParser::ExpressionContext>(0);
}

tree::TerminalNode* SILParser::Post_decrementationContext::DEC() {
  return getToken(SILParser::DEC, 0);
}

SILParser::Post_decrementationContext::Post_decrementationContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any SILParser::Post_decrementationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SILVisitor*>(visitor))
    return parserVisitor->visitPost_decrementation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Parenthesis_expressionContext ------------------------------------------------------------------

tree::TerminalNode* SILParser::Parenthesis_expressionContext::L_PAR() {
  return getToken(SILParser::L_PAR, 0);
}

SILParser::ExpressionContext* SILParser::Parenthesis_expressionContext::expression() {
  return getRuleContext<SILParser::ExpressionContext>(0);
}

tree::TerminalNode* SILParser::Parenthesis_expressionContext::R_PAR() {
  return getToken(SILParser::R_PAR, 0);
}

SILParser::Parenthesis_expressionContext::Parenthesis_expressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any SILParser::Parenthesis_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SILVisitor*>(visitor))
    return parserVisitor->visitParenthesis_expression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Multiplication_division_moduloContext ------------------------------------------------------------------

std::vector<SILParser::ExpressionContext *> SILParser::Multiplication_division_moduloContext::expression() {
  return getRuleContexts<SILParser::ExpressionContext>();
}

SILParser::ExpressionContext* SILParser::Multiplication_division_moduloContext::expression(size_t i) {
  return getRuleContext<SILParser::ExpressionContext>(i);
}

tree::TerminalNode* SILParser::Multiplication_division_moduloContext::STAR() {
  return getToken(SILParser::STAR, 0);
}

tree::TerminalNode* SILParser::Multiplication_division_moduloContext::SLASH() {
  return getToken(SILParser::SLASH, 0);
}

tree::TerminalNode* SILParser::Multiplication_division_moduloContext::PERCENT() {
  return getToken(SILParser::PERCENT, 0);
}

SILParser::Multiplication_division_moduloContext::Multiplication_division_moduloContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any SILParser::Multiplication_division_moduloContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SILVisitor*>(visitor))
    return parserVisitor->visitMultiplication_division_modulo(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Pre_incrementationContext ------------------------------------------------------------------

tree::TerminalNode* SILParser::Pre_incrementationContext::INC() {
  return getToken(SILParser::INC, 0);
}

SILParser::ExpressionContext* SILParser::Pre_incrementationContext::expression() {
  return getRuleContext<SILParser::ExpressionContext>(0);
}

SILParser::Pre_incrementationContext::Pre_incrementationContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any SILParser::Pre_incrementationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SILVisitor*>(visitor))
    return parserVisitor->visitPre_incrementation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ComparisonContext ------------------------------------------------------------------

std::vector<SILParser::ExpressionContext *> SILParser::ComparisonContext::expression() {
  return getRuleContexts<SILParser::ExpressionContext>();
}

SILParser::ExpressionContext* SILParser::ComparisonContext::expression(size_t i) {
  return getRuleContext<SILParser::ExpressionContext>(i);
}

tree::TerminalNode* SILParser::ComparisonContext::LT() {
  return getToken(SILParser::LT, 0);
}

tree::TerminalNode* SILParser::ComparisonContext::LEQ() {
  return getToken(SILParser::LEQ, 0);
}

tree::TerminalNode* SILParser::ComparisonContext::GT() {
  return getToken(SILParser::GT, 0);
}

tree::TerminalNode* SILParser::ComparisonContext::GEQ() {
  return getToken(SILParser::GEQ, 0);
}

SILParser::ComparisonContext::ComparisonContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any SILParser::ComparisonContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SILVisitor*>(visitor))
    return parserVisitor->visitComparison(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OrContext ------------------------------------------------------------------

tree::TerminalNode* SILParser::OrContext::OR() {
  return getToken(SILParser::OR, 0);
}

std::vector<SILParser::ExpressionContext *> SILParser::OrContext::expression() {
  return getRuleContexts<SILParser::ExpressionContext>();
}

SILParser::ExpressionContext* SILParser::OrContext::expression(size_t i) {
  return getRuleContext<SILParser::ExpressionContext>(i);
}

SILParser::OrContext::OrContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any SILParser::OrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SILVisitor*>(visitor))
    return parserVisitor->visitOr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Equality_differenceContext ------------------------------------------------------------------

std::vector<SILParser::ExpressionContext *> SILParser::Equality_differenceContext::expression() {
  return getRuleContexts<SILParser::ExpressionContext>();
}

SILParser::ExpressionContext* SILParser::Equality_differenceContext::expression(size_t i) {
  return getRuleContext<SILParser::ExpressionContext>(i);
}

tree::TerminalNode* SILParser::Equality_differenceContext::EQU() {
  return getToken(SILParser::EQU, 0);
}

tree::TerminalNode* SILParser::Equality_differenceContext::DIF() {
  return getToken(SILParser::DIF, 0);
}

SILParser::Equality_differenceContext::Equality_differenceContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any SILParser::Equality_differenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SILVisitor*>(visitor))
    return parserVisitor->visitEquality_difference(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Post_incrementationContext ------------------------------------------------------------------

SILParser::ExpressionContext* SILParser::Post_incrementationContext::expression() {
  return getRuleContext<SILParser::ExpressionContext>(0);
}

tree::TerminalNode* SILParser::Post_incrementationContext::INC() {
  return getToken(SILParser::INC, 0);
}

SILParser::Post_incrementationContext::Post_incrementationContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any SILParser::Post_incrementationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SILVisitor*>(visitor))
    return parserVisitor->visitPost_incrementation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Variable_divisionContext ------------------------------------------------------------------

tree::TerminalNode* SILParser::Variable_divisionContext::DIV_AFF() {
  return getToken(SILParser::DIV_AFF, 0);
}

std::vector<SILParser::ExpressionContext *> SILParser::Variable_divisionContext::expression() {
  return getRuleContexts<SILParser::ExpressionContext>();
}

SILParser::ExpressionContext* SILParser::Variable_divisionContext::expression(size_t i) {
  return getRuleContext<SILParser::ExpressionContext>(i);
}

SILParser::Variable_divisionContext::Variable_divisionContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any SILParser::Variable_divisionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SILVisitor*>(visitor))
    return parserVisitor->visitVariable_division(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Pre_decrementationContext ------------------------------------------------------------------

tree::TerminalNode* SILParser::Pre_decrementationContext::DEC() {
  return getToken(SILParser::DEC, 0);
}

SILParser::ExpressionContext* SILParser::Pre_decrementationContext::expression() {
  return getRuleContext<SILParser::ExpressionContext>(0);
}

SILParser::Pre_decrementationContext::Pre_decrementationContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any SILParser::Pre_decrementationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SILVisitor*>(visitor))
    return parserVisitor->visitPre_decrementation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Variable_affectationContext ------------------------------------------------------------------

tree::TerminalNode* SILParser::Variable_affectationContext::AFF() {
  return getToken(SILParser::AFF, 0);
}

std::vector<SILParser::ExpressionContext *> SILParser::Variable_affectationContext::expression() {
  return getRuleContexts<SILParser::ExpressionContext>();
}

SILParser::ExpressionContext* SILParser::Variable_affectationContext::expression(size_t i) {
  return getRuleContext<SILParser::ExpressionContext>(i);
}

SILParser::Variable_affectationContext::Variable_affectationContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any SILParser::Variable_affectationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SILVisitor*>(visitor))
    return parserVisitor->visitVariable_affectation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Variable_additionContext ------------------------------------------------------------------

tree::TerminalNode* SILParser::Variable_additionContext::PLS_AFF() {
  return getToken(SILParser::PLS_AFF, 0);
}

std::vector<SILParser::ExpressionContext *> SILParser::Variable_additionContext::expression() {
  return getRuleContexts<SILParser::ExpressionContext>();
}

SILParser::ExpressionContext* SILParser::Variable_additionContext::expression(size_t i) {
  return getRuleContext<SILParser::ExpressionContext>(i);
}

SILParser::Variable_additionContext::Variable_additionContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any SILParser::Variable_additionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SILVisitor*>(visitor))
    return parserVisitor->visitVariable_addition(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TernaryContext ------------------------------------------------------------------

tree::TerminalNode* SILParser::TernaryContext::Q_MARK() {
  return getToken(SILParser::Q_MARK, 0);
}

tree::TerminalNode* SILParser::TernaryContext::PIPE() {
  return getToken(SILParser::PIPE, 0);
}

std::vector<SILParser::ExpressionContext *> SILParser::TernaryContext::expression() {
  return getRuleContexts<SILParser::ExpressionContext>();
}

SILParser::ExpressionContext* SILParser::TernaryContext::expression(size_t i) {
  return getRuleContext<SILParser::ExpressionContext>(i);
}

SILParser::TernaryContext::TernaryContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any SILParser::TernaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SILVisitor*>(visitor))
    return parserVisitor->visitTernary(this);
  else
    return visitor->visitChildren(this);
}

SILParser::ExpressionContext* SILParser::expression() {
   return expression(0);
}

SILParser::ExpressionContext* SILParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SILParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  SILParser::ExpressionContext *previousContext = _localctx;
  size_t startState = 16;
  enterRecursionRule(_localctx, 16, SILParser::RuleExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(120);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SILParser::FUNCTION:
      case SILParser::IN:
      case SILParser::TRUE:
      case SILParser::FALSE:
      case SILParser::RANDOM:
      case SILParser::NEWLINE:
      case SILParser::INTEGER_PART:
      case SILParser::Id:
      case SILParser::String: {
        _localctx = _tracker.createInstance<Atomic_valueContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(107);
        atom();
        break;
      }

      case SILParser::L_PAR: {
        _localctx = _tracker.createInstance<Parenthesis_expressionContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(108);
        match(SILParser::L_PAR);
        setState(109);
        expression(0);
        setState(110);
        match(SILParser::R_PAR);
        break;
      }

      case SILParser::INC: {
        _localctx = _tracker.createInstance<Pre_incrementationContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(112);
        match(SILParser::INC);
        setState(113);
        expression(20);
        break;
      }

      case SILParser::DEC: {
        _localctx = _tracker.createInstance<Pre_decrementationContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(114);
        match(SILParser::DEC);
        setState(115);
        expression(19);
        break;
      }

      case SILParser::MINUS: {
        _localctx = _tracker.createInstance<Unary_minusContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(116);
        match(SILParser::MINUS);
        setState(117);
        expression(18);
        break;
      }

      case SILParser::NOT: {
        _localctx = _tracker.createInstance<NotContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(118);
        match(SILParser::NOT);
        setState(119);
        expression(17);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(184);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(182);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<PowerContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(122);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(123);
          match(SILParser::POWER);
          setState(124);
          dynamic_cast<PowerContext *>(_localctx)->right = expression(15);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<Multiplication_division_moduloContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(125);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(126);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << SILParser::STAR)
            | (1ULL << SILParser::SLASH)
            | (1ULL << SILParser::PERCENT))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(127);
          dynamic_cast<Multiplication_division_moduloContext *>(_localctx)->right = expression(15);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<Addition_substractionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(128);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(129);
          _la = _input->LA(1);
          if (!(_la == SILParser::PLUS

          || _la == SILParser::MINUS)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(130);
          dynamic_cast<Addition_substractionContext *>(_localctx)->right = expression(14);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<ComparisonContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(131);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(132);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << SILParser::LT)
            | (1ULL << SILParser::GT)
            | (1ULL << SILParser::LEQ)
            | (1ULL << SILParser::GEQ))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(133);
          dynamic_cast<ComparisonContext *>(_localctx)->right = expression(13);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<Equality_differenceContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(134);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(135);
          _la = _input->LA(1);
          if (!(_la == SILParser::EQU

          || _la == SILParser::DIF)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(136);
          dynamic_cast<Equality_differenceContext *>(_localctx)->right = expression(12);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<AndContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(137);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(138);
          match(SILParser::AND);
          setState(139);
          dynamic_cast<AndContext *>(_localctx)->right = expression(11);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<OrContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(140);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(141);
          match(SILParser::OR);
          setState(142);
          dynamic_cast<OrContext *>(_localctx)->right = expression(10);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<TernaryContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->condition = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(143);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(144);
          match(SILParser::Q_MARK);
          setState(145);
          dynamic_cast<TernaryContext *>(_localctx)->first = expression(0);
          setState(146);
          match(SILParser::PIPE);
          setState(147);
          dynamic_cast<TernaryContext *>(_localctx)->second = expression(9);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<Variable_affectationContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->ID = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(149);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(150);
          match(SILParser::AFF);
          setState(151);
          dynamic_cast<Variable_affectationContext *>(_localctx)->value = expression(7);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<Variable_powerContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->ID = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(152);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(153);
          match(SILParser::POW_AFF);
          setState(154);
          dynamic_cast<Variable_powerContext *>(_localctx)->value = expression(7);
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<Variable_multiplicationContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->ID = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(155);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(156);
          match(SILParser::TME_AFF);
          setState(157);
          dynamic_cast<Variable_multiplicationContext *>(_localctx)->value = expression(6);
          break;
        }

        case 12: {
          auto newContext = _tracker.createInstance<Variable_divisionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->ID = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(158);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(159);
          match(SILParser::DIV_AFF);
          setState(160);
          dynamic_cast<Variable_divisionContext *>(_localctx)->value = expression(5);
          break;
        }

        case 13: {
          auto newContext = _tracker.createInstance<Variable_moduloContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->ID = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(161);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(162);
          match(SILParser::MOD_AFF);
          setState(163);
          dynamic_cast<Variable_moduloContext *>(_localctx)->value = expression(4);
          break;
        }

        case 14: {
          auto newContext = _tracker.createInstance<Variable_additionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->ID = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(164);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(165);
          match(SILParser::PLS_AFF);
          setState(166);
          dynamic_cast<Variable_additionContext *>(_localctx)->value = expression(3);
          break;
        }

        case 15: {
          auto newContext = _tracker.createInstance<Variable_substractionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->ID = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(167);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(168);
          match(SILParser::SUB_AFF);
          setState(169);
          dynamic_cast<Variable_substractionContext *>(_localctx)->value = expression(2);
          break;
        }

        case 16: {
          auto newContext = _tracker.createInstance<Post_incrementationContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(170);

          if (!(precpred(_ctx, 23))) throw FailedPredicateException(this, "precpred(_ctx, 23)");
          setState(171);
          match(SILParser::INC);
          break;
        }

        case 17: {
          auto newContext = _tracker.createInstance<Post_decrementationContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(172);

          if (!(precpred(_ctx, 22))) throw FailedPredicateException(this, "precpred(_ctx, 22)");
          setState(173);
          match(SILParser::DEC);
          break;
        }

        case 18: {
          auto newContext = _tracker.createInstance<Function_callContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(174);

          if (!(precpred(_ctx, 21))) throw FailedPredicateException(this, "precpred(_ctx, 21)");
          setState(175);
          match(SILParser::L_PAR);
          setState(176);
          expression_list();
          setState(177);
          match(SILParser::R_PAR);
          break;
        }

        case 19: {
          auto newContext = _tracker.createInstance<CastContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(179);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(180);
          match(SILParser::SEP);
          setState(181);
          match(SILParser::TYPE);
          break;
        }

        } 
      }
      setState(186);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AtomContext ------------------------------------------------------------------

SILParser::AtomContext::AtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SILParser::Value_expressionContext* SILParser::AtomContext::value_expression() {
  return getRuleContext<SILParser::Value_expressionContext>(0);
}

SILParser::Special_value_expressionContext* SILParser::AtomContext::special_value_expression() {
  return getRuleContext<SILParser::Special_value_expressionContext>(0);
}


size_t SILParser::AtomContext::getRuleIndex() const {
  return SILParser::RuleAtom;
}

antlrcpp::Any SILParser::AtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SILVisitor*>(visitor))
    return parserVisitor->visitAtom(this);
  else
    return visitor->visitChildren(this);
}

SILParser::AtomContext* SILParser::atom() {
  AtomContext *_localctx = _tracker.createInstance<AtomContext>(_ctx, getState());
  enterRule(_localctx, 18, SILParser::RuleAtom);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(189);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SILParser::FUNCTION:
      case SILParser::TRUE:
      case SILParser::FALSE:
      case SILParser::INTEGER_PART:
      case SILParser::Id:
      case SILParser::String: {
        enterOuterAlt(_localctx, 1);
        setState(187);
        value_expression();
        break;
      }

      case SILParser::IN:
      case SILParser::RANDOM:
      case SILParser::NEWLINE: {
        enterOuterAlt(_localctx, 2);
        setState(188);
        special_value_expression();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Value_expressionContext ------------------------------------------------------------------

SILParser::Value_expressionContext::Value_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SILParser::NumberContext* SILParser::Value_expressionContext::number() {
  return getRuleContext<SILParser::NumberContext>(0);
}

tree::TerminalNode* SILParser::Value_expressionContext::String() {
  return getToken(SILParser::String, 0);
}

tree::TerminalNode* SILParser::Value_expressionContext::Id() {
  return getToken(SILParser::Id, 0);
}

SILParser::Function_declarationContext* SILParser::Value_expressionContext::function_declaration() {
  return getRuleContext<SILParser::Function_declarationContext>(0);
}

tree::TerminalNode* SILParser::Value_expressionContext::TRUE() {
  return getToken(SILParser::TRUE, 0);
}

tree::TerminalNode* SILParser::Value_expressionContext::FALSE() {
  return getToken(SILParser::FALSE, 0);
}


size_t SILParser::Value_expressionContext::getRuleIndex() const {
  return SILParser::RuleValue_expression;
}

antlrcpp::Any SILParser::Value_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SILVisitor*>(visitor))
    return parserVisitor->visitValue_expression(this);
  else
    return visitor->visitChildren(this);
}

SILParser::Value_expressionContext* SILParser::value_expression() {
  Value_expressionContext *_localctx = _tracker.createInstance<Value_expressionContext>(_ctx, getState());
  enterRule(_localctx, 20, SILParser::RuleValue_expression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(197);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SILParser::INTEGER_PART: {
        enterOuterAlt(_localctx, 1);
        setState(191);
        number();
        break;
      }

      case SILParser::String: {
        enterOuterAlt(_localctx, 2);
        setState(192);
        match(SILParser::String);
        break;
      }

      case SILParser::Id: {
        enterOuterAlt(_localctx, 3);
        setState(193);
        match(SILParser::Id);
        break;
      }

      case SILParser::FUNCTION: {
        enterOuterAlt(_localctx, 4);
        setState(194);
        function_declaration();
        break;
      }

      case SILParser::TRUE: {
        enterOuterAlt(_localctx, 5);
        setState(195);
        match(SILParser::TRUE);
        break;
      }

      case SILParser::FALSE: {
        enterOuterAlt(_localctx, 6);
        setState(196);
        match(SILParser::FALSE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

SILParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SILParser::NumberContext::INTEGER_PART() {
  return getToken(SILParser::INTEGER_PART, 0);
}

tree::TerminalNode* SILParser::NumberContext::DECIMAL_PART() {
  return getToken(SILParser::DECIMAL_PART, 0);
}


size_t SILParser::NumberContext::getRuleIndex() const {
  return SILParser::RuleNumber;
}

antlrcpp::Any SILParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SILVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}

SILParser::NumberContext* SILParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 22, SILParser::RuleNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(199);
    match(SILParser::INTEGER_PART);
    setState(201);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      setState(200);
      match(SILParser::DECIMAL_PART);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Special_value_expressionContext ------------------------------------------------------------------

SILParser::Special_value_expressionContext::Special_value_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SILParser::Special_value_expressionContext::IN() {
  return getToken(SILParser::IN, 0);
}

tree::TerminalNode* SILParser::Special_value_expressionContext::RANDOM() {
  return getToken(SILParser::RANDOM, 0);
}

tree::TerminalNode* SILParser::Special_value_expressionContext::NEWLINE() {
  return getToken(SILParser::NEWLINE, 0);
}


size_t SILParser::Special_value_expressionContext::getRuleIndex() const {
  return SILParser::RuleSpecial_value_expression;
}

antlrcpp::Any SILParser::Special_value_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SILVisitor*>(visitor))
    return parserVisitor->visitSpecial_value_expression(this);
  else
    return visitor->visitChildren(this);
}

SILParser::Special_value_expressionContext* SILParser::special_value_expression() {
  Special_value_expressionContext *_localctx = _tracker.createInstance<Special_value_expressionContext>(_ctx, getState());
  enterRule(_localctx, 24, SILParser::RuleSpecial_value_expression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(203);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SILParser::IN)
      | (1ULL << SILParser::RANDOM)
      | (1ULL << SILParser::NEWLINE))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_declarationContext ------------------------------------------------------------------

SILParser::Function_declarationContext::Function_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SILParser::Function_declarationContext::FUNCTION() {
  return getToken(SILParser::FUNCTION, 0);
}

tree::TerminalNode* SILParser::Function_declarationContext::Id() {
  return getToken(SILParser::Id, 0);
}

tree::TerminalNode* SILParser::Function_declarationContext::L_PAR() {
  return getToken(SILParser::L_PAR, 0);
}

SILParser::Parameter_listContext* SILParser::Function_declarationContext::parameter_list() {
  return getRuleContext<SILParser::Parameter_listContext>(0);
}

tree::TerminalNode* SILParser::Function_declarationContext::R_PAR() {
  return getToken(SILParser::R_PAR, 0);
}

SILParser::BlockContext* SILParser::Function_declarationContext::block() {
  return getRuleContext<SILParser::BlockContext>(0);
}

tree::TerminalNode* SILParser::Function_declarationContext::Newline() {
  return getToken(SILParser::Newline, 0);
}


size_t SILParser::Function_declarationContext::getRuleIndex() const {
  return SILParser::RuleFunction_declaration;
}

antlrcpp::Any SILParser::Function_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SILVisitor*>(visitor))
    return parserVisitor->visitFunction_declaration(this);
  else
    return visitor->visitChildren(this);
}

SILParser::Function_declarationContext* SILParser::function_declaration() {
  Function_declarationContext *_localctx = _tracker.createInstance<Function_declarationContext>(_ctx, getState());
  enterRule(_localctx, 26, SILParser::RuleFunction_declaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(205);
    match(SILParser::FUNCTION);
    setState(206);
    match(SILParser::Id);
    setState(207);
    match(SILParser::L_PAR);
    setState(208);
    parameter_list();
    setState(209);
    match(SILParser::R_PAR);
    setState(211);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SILParser::Newline) {
      setState(210);
      match(SILParser::Newline);
    }
    setState(213);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Parameter_listContext ------------------------------------------------------------------

SILParser::Parameter_listContext::Parameter_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SILParser::Variable_creationContext *> SILParser::Parameter_listContext::variable_creation() {
  return getRuleContexts<SILParser::Variable_creationContext>();
}

SILParser::Variable_creationContext* SILParser::Parameter_listContext::variable_creation(size_t i) {
  return getRuleContext<SILParser::Variable_creationContext>(i);
}

std::vector<tree::TerminalNode *> SILParser::Parameter_listContext::COMMA() {
  return getTokens(SILParser::COMMA);
}

tree::TerminalNode* SILParser::Parameter_listContext::COMMA(size_t i) {
  return getToken(SILParser::COMMA, i);
}


size_t SILParser::Parameter_listContext::getRuleIndex() const {
  return SILParser::RuleParameter_list;
}

antlrcpp::Any SILParser::Parameter_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SILVisitor*>(visitor))
    return parserVisitor->visitParameter_list(this);
  else
    return visitor->visitChildren(this);
}

SILParser::Parameter_listContext* SILParser::parameter_list() {
  Parameter_listContext *_localctx = _tracker.createInstance<Parameter_listContext>(_ctx, getState());
  enterRule(_localctx, 28, SILParser::RuleParameter_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(223);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SILParser::VAR

    || _la == SILParser::CONST) {
      setState(215);
      variable_creation();
      setState(220);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SILParser::COMMA) {
        setState(216);
        match(SILParser::COMMA);
        setState(217);
        variable_creation();
        setState(222);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Variable_creationContext ------------------------------------------------------------------

SILParser::Variable_creationContext::Variable_creationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SILParser::Variable_creationContext::Id() {
  return getToken(SILParser::Id, 0);
}

tree::TerminalNode* SILParser::Variable_creationContext::VAR() {
  return getToken(SILParser::VAR, 0);
}

tree::TerminalNode* SILParser::Variable_creationContext::CONST() {
  return getToken(SILParser::CONST, 0);
}

tree::TerminalNode* SILParser::Variable_creationContext::SEP() {
  return getToken(SILParser::SEP, 0);
}

tree::TerminalNode* SILParser::Variable_creationContext::TYPE() {
  return getToken(SILParser::TYPE, 0);
}

tree::TerminalNode* SILParser::Variable_creationContext::AFF() {
  return getToken(SILParser::AFF, 0);
}

SILParser::ExpressionContext* SILParser::Variable_creationContext::expression() {
  return getRuleContext<SILParser::ExpressionContext>(0);
}


size_t SILParser::Variable_creationContext::getRuleIndex() const {
  return SILParser::RuleVariable_creation;
}

antlrcpp::Any SILParser::Variable_creationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SILVisitor*>(visitor))
    return parserVisitor->visitVariable_creation(this);
  else
    return visitor->visitChildren(this);
}

SILParser::Variable_creationContext* SILParser::variable_creation() {
  Variable_creationContext *_localctx = _tracker.createInstance<Variable_creationContext>(_ctx, getState());
  enterRule(_localctx, 30, SILParser::RuleVariable_creation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(225);
    _la = _input->LA(1);
    if (!(_la == SILParser::VAR

    || _la == SILParser::CONST)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(228);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SILParser::SEP) {
      setState(226);
      match(SILParser::SEP);
      setState(227);
      match(SILParser::TYPE);
    }
    setState(230);
    match(SILParser::Id);
    setState(233);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SILParser::AFF) {
      setState(231);
      match(SILParser::AFF);
      setState(232);
      expression(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool SILParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 8: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool SILParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 15);
    case 1: return precpred(_ctx, 14);
    case 2: return precpred(_ctx, 13);
    case 3: return precpred(_ctx, 12);
    case 4: return precpred(_ctx, 11);
    case 5: return precpred(_ctx, 10);
    case 6: return precpred(_ctx, 9);
    case 7: return precpred(_ctx, 8);
    case 8: return precpred(_ctx, 7);
    case 9: return precpred(_ctx, 6);
    case 10: return precpred(_ctx, 5);
    case 11: return precpred(_ctx, 4);
    case 12: return precpred(_ctx, 3);
    case 13: return precpred(_ctx, 2);
    case 14: return precpred(_ctx, 1);
    case 15: return precpred(_ctx, 23);
    case 16: return precpred(_ctx, 22);
    case 17: return precpred(_ctx, 21);
    case 18: return precpred(_ctx, 16);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> SILParser::_decisionToDFA;
atn::PredictionContextCache SILParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN SILParser::_atn;
std::vector<uint16_t> SILParser::_serializedATN;

std::vector<std::string> SILParser::_ruleNames = {
  "file", "instruction_list", "instruction", "block", "action", "expression_list", 
  "if_else", "while_loop", "expression", "atom", "value_expression", "number", 
  "special_value_expression", "function_declaration", "parameter_list", 
  "variable_creation"
};

std::vector<std::string> SILParser::_literalNames = {
  "", "'function'", "'var'", "'const'", "'return'", "'while'", "'out'", 
  "'in'", "'if'", "'elif'", "'else'", "'true'", "'false'", "'pause'", "'random'", 
  "'newline'", "", "'('", "')'", "'{'", "'}'", "'+'", "'-'", "'*'", "'/'", 
  "'%'", "'^'", "':'", "'''", "'\"'", "'='", "'=='", "'!='", "'<'", "'>'", 
  "'<='", "'>='", "'++'", "'--'", "'^='", "'+='", "'-='", "'*='", "'/='", 
  "'%='", "'.'", "','", "';'", "'_'", "'or'", "'and'", "'not'", "'$'", "'?'", 
  "'|'"
};

std::vector<std::string> SILParser::_symbolicNames = {
  "", "FUNCTION", "VAR", "CONST", "RETURN", "WHILE", "OUT", "IN", "IF", 
  "ELIF", "ELSE", "TRUE", "FALSE", "PAUSE", "RANDOM", "NEWLINE", "TYPE", 
  "L_PAR", "R_PAR", "L_BRACKET", "R_BRACKET", "PLUS", "MINUS", "STAR", "SLASH", 
  "PERCENT", "POWER", "SEP", "S_QUOTE", "D_QUOTE", "AFF", "EQU", "DIF", 
  "LT", "GT", "LEQ", "GEQ", "INC", "DEC", "POW_AFF", "PLS_AFF", "SUB_AFF", 
  "TME_AFF", "DIV_AFF", "MOD_AFF", "DOT", "COMMA", "SEMICOLON", "UNDERSCORE", 
  "OR", "AND", "NOT", "DOLLAR", "Q_MARK", "PIPE", "INTEGER_PART", "DECIMAL_PART", 
  "Id", "String", "Newline", "Whitespace", "Single_comment", "Multi_comment"
};

dfa::Vocabulary SILParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> SILParser::_tokenNames;

SILParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x40, 0xee, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x3, 0x2, 
    0x5, 0x2, 0x24, 0xa, 0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0x28, 0xa, 0x2, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x2f, 0xa, 
    0x3, 0xc, 0x3, 0xe, 0x3, 0x32, 0xb, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x5, 0x4, 0x37, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x3b, 0xa, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x3f, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 
    0x6, 0x4a, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x4f, 0xa, 
    0x7, 0xc, 0x7, 0xe, 0x7, 0x52, 0xb, 0x7, 0x5, 0x7, 0x54, 0xa, 0x7, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x59, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x5, 0x8, 0x5d, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x61, 0xa, 0x8, 
    0x3, 0x8, 0x5, 0x8, 0x64, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 
    0x9, 0x69, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x7b, 0xa, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0xb9, 0xa, 0xa, 0xc, 0xa, 
    0xe, 0xa, 0xbc, 0xb, 0xa, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0xc0, 0xa, 0xb, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 
    0xc8, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0xcc, 0xa, 0xd, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x5, 0xf, 0xd6, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x7, 0x10, 0xdd, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0xe0, 0xb, 
    0x10, 0x5, 0x10, 0xe2, 0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 
    0x11, 0xe7, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0xec, 
    0xa, 0x11, 0x3, 0x11, 0x2, 0x3, 0x12, 0x12, 0x2, 0x4, 0x6, 0x8, 0xa, 
    0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x2, 
    0x9, 0x4, 0x2, 0x31, 0x31, 0x3d, 0x3d, 0x3, 0x2, 0x19, 0x1b, 0x3, 0x2, 
    0x17, 0x18, 0x3, 0x2, 0x23, 0x26, 0x3, 0x2, 0x21, 0x22, 0x4, 0x2, 0x9, 
    0x9, 0x10, 0x11, 0x3, 0x2, 0x4, 0x5, 0x2, 0x114, 0x2, 0x23, 0x3, 0x2, 
    0x2, 0x2, 0x4, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x6, 0x36, 0x3, 0x2, 0x2, 0x2, 
    0x8, 0x38, 0x3, 0x2, 0x2, 0x2, 0xa, 0x49, 0x3, 0x2, 0x2, 0x2, 0xc, 0x53, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0x55, 0x3, 0x2, 0x2, 0x2, 0x10, 0x65, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x14, 0xbf, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0xc7, 0x3, 0x2, 0x2, 0x2, 0x18, 0xc9, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0xcd, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xcf, 0x3, 0x2, 0x2, 0x2, 
    0x1e, 0xe1, 0x3, 0x2, 0x2, 0x2, 0x20, 0xe3, 0x3, 0x2, 0x2, 0x2, 0x22, 
    0x24, 0x7, 0x3d, 0x2, 0x2, 0x23, 0x22, 0x3, 0x2, 0x2, 0x2, 0x23, 0x24, 
    0x3, 0x2, 0x2, 0x2, 0x24, 0x25, 0x3, 0x2, 0x2, 0x2, 0x25, 0x27, 0x5, 
    0x4, 0x3, 0x2, 0x26, 0x28, 0x7, 0x3d, 0x2, 0x2, 0x27, 0x26, 0x3, 0x2, 
    0x2, 0x2, 0x27, 0x28, 0x3, 0x2, 0x2, 0x2, 0x28, 0x29, 0x3, 0x2, 0x2, 
    0x2, 0x29, 0x2a, 0x7, 0x2, 0x2, 0x3, 0x2a, 0x3, 0x3, 0x2, 0x2, 0x2, 
    0x2b, 0x30, 0x5, 0x6, 0x4, 0x2, 0x2c, 0x2d, 0x9, 0x2, 0x2, 0x2, 0x2d, 
    0x2f, 0x5, 0x6, 0x4, 0x2, 0x2e, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x32, 
    0x3, 0x2, 0x2, 0x2, 0x30, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x30, 0x31, 0x3, 
    0x2, 0x2, 0x2, 0x31, 0x5, 0x3, 0x2, 0x2, 0x2, 0x32, 0x30, 0x3, 0x2, 
    0x2, 0x2, 0x33, 0x37, 0x5, 0x8, 0x5, 0x2, 0x34, 0x37, 0x5, 0xa, 0x6, 
    0x2, 0x35, 0x37, 0x3, 0x2, 0x2, 0x2, 0x36, 0x33, 0x3, 0x2, 0x2, 0x2, 
    0x36, 0x34, 0x3, 0x2, 0x2, 0x2, 0x36, 0x35, 0x3, 0x2, 0x2, 0x2, 0x37, 
    0x7, 0x3, 0x2, 0x2, 0x2, 0x38, 0x3a, 0x7, 0x15, 0x2, 0x2, 0x39, 0x3b, 
    0x7, 0x3d, 0x2, 0x2, 0x3a, 0x39, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3b, 0x3, 
    0x2, 0x2, 0x2, 0x3b, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3e, 0x5, 0x4, 
    0x3, 0x2, 0x3d, 0x3f, 0x7, 0x3d, 0x2, 0x2, 0x3e, 0x3d, 0x3, 0x2, 0x2, 
    0x2, 0x3e, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x40, 0x3, 0x2, 0x2, 0x2, 
    0x40, 0x41, 0x7, 0x16, 0x2, 0x2, 0x41, 0x9, 0x3, 0x2, 0x2, 0x2, 0x42, 
    0x43, 0x7, 0x8, 0x2, 0x2, 0x43, 0x4a, 0x5, 0xc, 0x7, 0x2, 0x44, 0x4a, 
    0x7, 0xf, 0x2, 0x2, 0x45, 0x4a, 0x5, 0xe, 0x8, 0x2, 0x46, 0x4a, 0x5, 
    0x10, 0x9, 0x2, 0x47, 0x4a, 0x5, 0x20, 0x11, 0x2, 0x48, 0x4a, 0x5, 0x12, 
    0xa, 0x2, 0x49, 0x42, 0x3, 0x2, 0x2, 0x2, 0x49, 0x44, 0x3, 0x2, 0x2, 
    0x2, 0x49, 0x45, 0x3, 0x2, 0x2, 0x2, 0x49, 0x46, 0x3, 0x2, 0x2, 0x2, 
    0x49, 0x47, 0x3, 0x2, 0x2, 0x2, 0x49, 0x48, 0x3, 0x2, 0x2, 0x2, 0x4a, 
    0xb, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x50, 0x5, 0x12, 0xa, 0x2, 0x4c, 0x4d, 
    0x7, 0x30, 0x2, 0x2, 0x4d, 0x4f, 0x5, 0x12, 0xa, 0x2, 0x4e, 0x4c, 0x3, 
    0x2, 0x2, 0x2, 0x4f, 0x52, 0x3, 0x2, 0x2, 0x2, 0x50, 0x4e, 0x3, 0x2, 
    0x2, 0x2, 0x50, 0x51, 0x3, 0x2, 0x2, 0x2, 0x51, 0x54, 0x3, 0x2, 0x2, 
    0x2, 0x52, 0x50, 0x3, 0x2, 0x2, 0x2, 0x53, 0x4b, 0x3, 0x2, 0x2, 0x2, 
    0x53, 0x54, 0x3, 0x2, 0x2, 0x2, 0x54, 0xd, 0x3, 0x2, 0x2, 0x2, 0x55, 
    0x56, 0x7, 0xa, 0x2, 0x2, 0x56, 0x58, 0x5, 0x12, 0xa, 0x2, 0x57, 0x59, 
    0x7, 0x3d, 0x2, 0x2, 0x58, 0x57, 0x3, 0x2, 0x2, 0x2, 0x58, 0x59, 0x3, 
    0x2, 0x2, 0x2, 0x59, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5c, 0x5, 0x6, 
    0x4, 0x2, 0x5b, 0x5d, 0x7, 0x3d, 0x2, 0x2, 0x5c, 0x5b, 0x3, 0x2, 0x2, 
    0x2, 0x5c, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x63, 0x3, 0x2, 0x2, 0x2, 
    0x5e, 0x60, 0x7, 0xc, 0x2, 0x2, 0x5f, 0x61, 0x7, 0x3d, 0x2, 0x2, 0x60, 
    0x5f, 0x3, 0x2, 0x2, 0x2, 0x60, 0x61, 0x3, 0x2, 0x2, 0x2, 0x61, 0x62, 
    0x3, 0x2, 0x2, 0x2, 0x62, 0x64, 0x5, 0x6, 0x4, 0x2, 0x63, 0x5e, 0x3, 
    0x2, 0x2, 0x2, 0x63, 0x64, 0x3, 0x2, 0x2, 0x2, 0x64, 0xf, 0x3, 0x2, 
    0x2, 0x2, 0x65, 0x66, 0x7, 0x7, 0x2, 0x2, 0x66, 0x68, 0x5, 0x12, 0xa, 
    0x2, 0x67, 0x69, 0x7, 0x3d, 0x2, 0x2, 0x68, 0x67, 0x3, 0x2, 0x2, 0x2, 
    0x68, 0x69, 0x3, 0x2, 0x2, 0x2, 0x69, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x6a, 
    0x6b, 0x5, 0x6, 0x4, 0x2, 0x6b, 0x11, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6d, 
    0x8, 0xa, 0x1, 0x2, 0x6d, 0x7b, 0x5, 0x14, 0xb, 0x2, 0x6e, 0x6f, 0x7, 
    0x13, 0x2, 0x2, 0x6f, 0x70, 0x5, 0x12, 0xa, 0x2, 0x70, 0x71, 0x7, 0x14, 
    0x2, 0x2, 0x71, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x72, 0x73, 0x7, 0x27, 0x2, 
    0x2, 0x73, 0x7b, 0x5, 0x12, 0xa, 0x16, 0x74, 0x75, 0x7, 0x28, 0x2, 0x2, 
    0x75, 0x7b, 0x5, 0x12, 0xa, 0x15, 0x76, 0x77, 0x7, 0x18, 0x2, 0x2, 0x77, 
    0x7b, 0x5, 0x12, 0xa, 0x14, 0x78, 0x79, 0x7, 0x35, 0x2, 0x2, 0x79, 0x7b, 
    0x5, 0x12, 0xa, 0x13, 0x7a, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x6e, 0x3, 
    0x2, 0x2, 0x2, 0x7a, 0x72, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x74, 0x3, 0x2, 
    0x2, 0x2, 0x7a, 0x76, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x78, 0x3, 0x2, 0x2, 
    0x2, 0x7b, 0xba, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7d, 0xc, 0x11, 0x2, 0x2, 
    0x7d, 0x7e, 0x7, 0x1c, 0x2, 0x2, 0x7e, 0xb9, 0x5, 0x12, 0xa, 0x11, 0x7f, 
    0x80, 0xc, 0x10, 0x2, 0x2, 0x80, 0x81, 0x9, 0x3, 0x2, 0x2, 0x81, 0xb9, 
    0x5, 0x12, 0xa, 0x11, 0x82, 0x83, 0xc, 0xf, 0x2, 0x2, 0x83, 0x84, 0x9, 
    0x4, 0x2, 0x2, 0x84, 0xb9, 0x5, 0x12, 0xa, 0x10, 0x85, 0x86, 0xc, 0xe, 
    0x2, 0x2, 0x86, 0x87, 0x9, 0x5, 0x2, 0x2, 0x87, 0xb9, 0x5, 0x12, 0xa, 
    0xf, 0x88, 0x89, 0xc, 0xd, 0x2, 0x2, 0x89, 0x8a, 0x9, 0x6, 0x2, 0x2, 
    0x8a, 0xb9, 0x5, 0x12, 0xa, 0xe, 0x8b, 0x8c, 0xc, 0xc, 0x2, 0x2, 0x8c, 
    0x8d, 0x7, 0x34, 0x2, 0x2, 0x8d, 0xb9, 0x5, 0x12, 0xa, 0xd, 0x8e, 0x8f, 
    0xc, 0xb, 0x2, 0x2, 0x8f, 0x90, 0x7, 0x33, 0x2, 0x2, 0x90, 0xb9, 0x5, 
    0x12, 0xa, 0xc, 0x91, 0x92, 0xc, 0xa, 0x2, 0x2, 0x92, 0x93, 0x7, 0x37, 
    0x2, 0x2, 0x93, 0x94, 0x5, 0x12, 0xa, 0x2, 0x94, 0x95, 0x7, 0x38, 0x2, 
    0x2, 0x95, 0x96, 0x5, 0x12, 0xa, 0xb, 0x96, 0xb9, 0x3, 0x2, 0x2, 0x2, 
    0x97, 0x98, 0xc, 0x9, 0x2, 0x2, 0x98, 0x99, 0x7, 0x20, 0x2, 0x2, 0x99, 
    0xb9, 0x5, 0x12, 0xa, 0x9, 0x9a, 0x9b, 0xc, 0x8, 0x2, 0x2, 0x9b, 0x9c, 
    0x7, 0x29, 0x2, 0x2, 0x9c, 0xb9, 0x5, 0x12, 0xa, 0x9, 0x9d, 0x9e, 0xc, 
    0x7, 0x2, 0x2, 0x9e, 0x9f, 0x7, 0x2c, 0x2, 0x2, 0x9f, 0xb9, 0x5, 0x12, 
    0xa, 0x8, 0xa0, 0xa1, 0xc, 0x6, 0x2, 0x2, 0xa1, 0xa2, 0x7, 0x2d, 0x2, 
    0x2, 0xa2, 0xb9, 0x5, 0x12, 0xa, 0x7, 0xa3, 0xa4, 0xc, 0x5, 0x2, 0x2, 
    0xa4, 0xa5, 0x7, 0x2e, 0x2, 0x2, 0xa5, 0xb9, 0x5, 0x12, 0xa, 0x6, 0xa6, 
    0xa7, 0xc, 0x4, 0x2, 0x2, 0xa7, 0xa8, 0x7, 0x2a, 0x2, 0x2, 0xa8, 0xb9, 
    0x5, 0x12, 0xa, 0x5, 0xa9, 0xaa, 0xc, 0x3, 0x2, 0x2, 0xaa, 0xab, 0x7, 
    0x2b, 0x2, 0x2, 0xab, 0xb9, 0x5, 0x12, 0xa, 0x4, 0xac, 0xad, 0xc, 0x19, 
    0x2, 0x2, 0xad, 0xb9, 0x7, 0x27, 0x2, 0x2, 0xae, 0xaf, 0xc, 0x18, 0x2, 
    0x2, 0xaf, 0xb9, 0x7, 0x28, 0x2, 0x2, 0xb0, 0xb1, 0xc, 0x17, 0x2, 0x2, 
    0xb1, 0xb2, 0x7, 0x13, 0x2, 0x2, 0xb2, 0xb3, 0x5, 0xc, 0x7, 0x2, 0xb3, 
    0xb4, 0x7, 0x14, 0x2, 0x2, 0xb4, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb6, 
    0xc, 0x12, 0x2, 0x2, 0xb6, 0xb7, 0x7, 0x1d, 0x2, 0x2, 0xb7, 0xb9, 0x7, 
    0x12, 0x2, 0x2, 0xb8, 0x7c, 0x3, 0x2, 0x2, 0x2, 0xb8, 0x7f, 0x3, 0x2, 
    0x2, 0x2, 0xb8, 0x82, 0x3, 0x2, 0x2, 0x2, 0xb8, 0x85, 0x3, 0x2, 0x2, 
    0x2, 0xb8, 0x88, 0x3, 0x2, 0x2, 0x2, 0xb8, 0x8b, 0x3, 0x2, 0x2, 0x2, 
    0xb8, 0x8e, 0x3, 0x2, 0x2, 0x2, 0xb8, 0x91, 0x3, 0x2, 0x2, 0x2, 0xb8, 
    0x97, 0x3, 0x2, 0x2, 0x2, 0xb8, 0x9a, 0x3, 0x2, 0x2, 0x2, 0xb8, 0x9d, 
    0x3, 0x2, 0x2, 0x2, 0xb8, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xa3, 0x3, 
    0x2, 0x2, 0x2, 0xb8, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xa9, 0x3, 0x2, 
    0x2, 0x2, 0xb8, 0xac, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xae, 0x3, 0x2, 0x2, 
    0x2, 0xb8, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb5, 0x3, 0x2, 0x2, 0x2, 
    0xb9, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xba, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xba, 
    0xbb, 0x3, 0x2, 0x2, 0x2, 0xbb, 0x13, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xba, 
    0x3, 0x2, 0x2, 0x2, 0xbd, 0xc0, 0x5, 0x16, 0xc, 0x2, 0xbe, 0xc0, 0x5, 
    0x1a, 0xe, 0x2, 0xbf, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xbe, 0x3, 0x2, 
    0x2, 0x2, 0xc0, 0x15, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xc8, 0x5, 0x18, 0xd, 
    0x2, 0xc2, 0xc8, 0x7, 0x3c, 0x2, 0x2, 0xc3, 0xc8, 0x7, 0x3b, 0x2, 0x2, 
    0xc4, 0xc8, 0x5, 0x1c, 0xf, 0x2, 0xc5, 0xc8, 0x7, 0xd, 0x2, 0x2, 0xc6, 
    0xc8, 0x7, 0xe, 0x2, 0x2, 0xc7, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc2, 
    0x3, 0x2, 0x2, 0x2, 0xc7, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc4, 0x3, 
    0x2, 0x2, 0x2, 0xc7, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc6, 0x3, 0x2, 
    0x2, 0x2, 0xc8, 0x17, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xcb, 0x7, 0x39, 0x2, 
    0x2, 0xca, 0xcc, 0x7, 0x3a, 0x2, 0x2, 0xcb, 0xca, 0x3, 0x2, 0x2, 0x2, 
    0xcb, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xcc, 0x19, 0x3, 0x2, 0x2, 0x2, 0xcd, 
    0xce, 0x9, 0x7, 0x2, 0x2, 0xce, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd0, 
    0x7, 0x3, 0x2, 0x2, 0xd0, 0xd1, 0x7, 0x3b, 0x2, 0x2, 0xd1, 0xd2, 0x7, 
    0x13, 0x2, 0x2, 0xd2, 0xd3, 0x5, 0x1e, 0x10, 0x2, 0xd3, 0xd5, 0x7, 0x14, 
    0x2, 0x2, 0xd4, 0xd6, 0x7, 0x3d, 0x2, 0x2, 0xd5, 0xd4, 0x3, 0x2, 0x2, 
    0x2, 0xd5, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd7, 0x3, 0x2, 0x2, 0x2, 
    0xd7, 0xd8, 0x5, 0x8, 0x5, 0x2, 0xd8, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xd9, 
    0xde, 0x5, 0x20, 0x11, 0x2, 0xda, 0xdb, 0x7, 0x30, 0x2, 0x2, 0xdb, 0xdd, 
    0x5, 0x20, 0x11, 0x2, 0xdc, 0xda, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xe0, 0x3, 
    0x2, 0x2, 0x2, 0xde, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xde, 0xdf, 0x3, 0x2, 
    0x2, 0x2, 0xdf, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xde, 0x3, 0x2, 0x2, 
    0x2, 0xe1, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xe2, 0x3, 0x2, 0x2, 0x2, 
    0xe2, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe6, 0x9, 0x8, 0x2, 0x2, 0xe4, 
    0xe5, 0x7, 0x1d, 0x2, 0x2, 0xe5, 0xe7, 0x7, 0x12, 0x2, 0x2, 0xe6, 0xe4, 
    0x3, 0x2, 0x2, 0x2, 0xe6, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe8, 0x3, 
    0x2, 0x2, 0x2, 0xe8, 0xeb, 0x7, 0x3b, 0x2, 0x2, 0xe9, 0xea, 0x7, 0x20, 
    0x2, 0x2, 0xea, 0xec, 0x5, 0x12, 0xa, 0x2, 0xeb, 0xe9, 0x3, 0x2, 0x2, 
    0x2, 0xeb, 0xec, 0x3, 0x2, 0x2, 0x2, 0xec, 0x21, 0x3, 0x2, 0x2, 0x2, 
    0x1b, 0x23, 0x27, 0x30, 0x36, 0x3a, 0x3e, 0x49, 0x50, 0x53, 0x58, 0x5c, 
    0x60, 0x63, 0x68, 0x7a, 0xb8, 0xba, 0xbf, 0xc7, 0xcb, 0xd5, 0xde, 0xe1, 
    0xe6, 0xeb, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

SILParser::Initializer SILParser::_init;
