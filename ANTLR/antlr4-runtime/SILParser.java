// Generated from .\SIL.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class SILParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		Newline=1, FUNCTION=2, Id=3, L_PAR=4, R_PAR=5, COMMA=6, VAR=7, SEP=8, 
		TYPE=9, AFF=10, L_BRACKET=11, R_BRACKET=12, OUT=13, IN=14, PAUSE=15, PLUS=16, 
		MINUS=17, STAR=18, SLASH=19, POWER=20, NUMBER=21, OR=22, AND=23, EQU=24, 
		DIF=25, LT=26, GT=27, LEQ=28, GEQ=29, NOT=30, TRUE=31, FALSE=32, String=33;
	public static final int
		RULE_file = 0, RULE_statement_list = 1, RULE_statement = 2, RULE_function_declaration = 3, 
		RULE_function_call = 4, RULE_parameter_list = 5, RULE_argument_list = 6, 
		RULE_variable_declaration = 7, RULE_variable_creation = 8, RULE_variable_affectation = 9, 
		RULE_instruction = 10, RULE_block = 11, RULE_instruction_list = 12, RULE_action = 13, 
		RULE_expression_list = 14, RULE_expression = 15, RULE_numeric_expression = 16, 
		RULE_numeric_mul_div = 17, RULE_numeric_pow = 18, RULE_numeric_inversion = 19, 
		RULE_numeric_cast = 20, RULE_numeric_atom = 21, RULE_boolean_expression = 22, 
		RULE_boolean_and = 23, RULE_boolean_comparator = 24, RULE_boolean_not = 25, 
		RULE_boolean_cast = 26, RULE_boolean_atom = 27, RULE_string_expression = 28, 
		RULE_string_cast = 29, RULE_string_atom = 30, RULE_cast = 31;
	public static final String[] ruleNames = {
		"file", "statement_list", "statement", "function_declaration", "function_call", 
		"parameter_list", "argument_list", "variable_declaration", "variable_creation", 
		"variable_affectation", "instruction", "block", "instruction_list", "action", 
		"expression_list", "expression", "numeric_expression", "numeric_mul_div", 
		"numeric_pow", "numeric_inversion", "numeric_cast", "numeric_atom", "boolean_expression", 
		"boolean_and", "boolean_comparator", "boolean_not", "boolean_cast", "boolean_atom", 
		"string_expression", "string_cast", "string_atom", "cast"
	};

	private static final String[] _LITERAL_NAMES = {
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, "Newline", "FUNCTION", "Id", "L_PAR", "R_PAR", "COMMA", "VAR", "SEP", 
		"TYPE", "AFF", "L_BRACKET", "R_BRACKET", "OUT", "IN", "PAUSE", "PLUS", 
		"MINUS", "STAR", "SLASH", "POWER", "NUMBER", "OR", "AND", "EQU", "DIF", 
		"LT", "GT", "LEQ", "GEQ", "NOT", "TRUE", "FALSE", "String"
	};
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "SIL.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public SILParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}
	public static class FileContext extends ParserRuleContext {
		public Statement_listContext statement_list() {
			return getRuleContext(Statement_listContext.class,0);
		}
		public TerminalNode EOF() { return getToken(SILParser.EOF, 0); }
		public TerminalNode Newline() { return getToken(SILParser.Newline, 0); }
		public FileContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_file; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof SILVisitor ) return ((SILVisitor<? extends T>)visitor).visitFile(this);
			else return visitor.visitChildren(this);
		}
	}

	public final FileContext file() throws RecognitionException {
		FileContext _localctx = new FileContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_file);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(65);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Newline) {
				{
				setState(64);
				match(Newline);
				}
			}

			setState(67);
			statement_list();
			setState(68);
			match(EOF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Statement_listContext extends ParserRuleContext {
		public StatementContext statement;
		public List<StatementContext> statements = new ArrayList<StatementContext>();
		public List<TerminalNode> Newline() { return getTokens(SILParser.Newline); }
		public TerminalNode Newline(int i) {
			return getToken(SILParser.Newline, i);
		}
		public List<StatementContext> statement() {
			return getRuleContexts(StatementContext.class);
		}
		public StatementContext statement(int i) {
			return getRuleContext(StatementContext.class,i);
		}
		public Statement_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statement_list; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof SILVisitor ) return ((SILVisitor<? extends T>)visitor).visitStatement_list(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Statement_listContext statement_list() throws RecognitionException {
		Statement_listContext _localctx = new Statement_listContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_statement_list);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(75);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,1,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(70);
					((Statement_listContext)_localctx).statement = statement();
					((Statement_listContext)_localctx).statements.add(((Statement_listContext)_localctx).statement);
					setState(71);
					match(Newline);
					}
					} 
				}
				setState(77);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,1,_ctx);
			}
			setState(79);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FUNCTION) | (1L << Id) | (1L << VAR) | (1L << L_BRACKET) | (1L << OUT) | (1L << IN) | (1L << PAUSE))) != 0)) {
				{
				setState(78);
				((Statement_listContext)_localctx).statement = statement();
				((Statement_listContext)_localctx).statements.add(((Statement_listContext)_localctx).statement);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StatementContext extends ParserRuleContext {
		public Function_declarationContext function_declaration() {
			return getRuleContext(Function_declarationContext.class,0);
		}
		public InstructionContext instruction() {
			return getRuleContext(InstructionContext.class,0);
		}
		public StatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statement; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof SILVisitor ) return ((SILVisitor<? extends T>)visitor).visitStatement(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StatementContext statement() throws RecognitionException {
		StatementContext _localctx = new StatementContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_statement);
		try {
			setState(83);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case FUNCTION:
				enterOuterAlt(_localctx, 1);
				{
				setState(81);
				function_declaration();
				}
				break;
			case Id:
			case VAR:
			case L_BRACKET:
			case OUT:
			case IN:
			case PAUSE:
				enterOuterAlt(_localctx, 2);
				{
				setState(82);
				instruction();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Function_declarationContext extends ParserRuleContext {
		public TerminalNode FUNCTION() { return getToken(SILParser.FUNCTION, 0); }
		public TerminalNode Id() { return getToken(SILParser.Id, 0); }
		public TerminalNode L_PAR() { return getToken(SILParser.L_PAR, 0); }
		public Parameter_listContext parameter_list() {
			return getRuleContext(Parameter_listContext.class,0);
		}
		public List<BlockContext> block() {
			return getRuleContexts(BlockContext.class);
		}
		public BlockContext block(int i) {
			return getRuleContext(BlockContext.class,i);
		}
		public TerminalNode R_PAR() { return getToken(SILParser.R_PAR, 0); }
		public Function_declarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_function_declaration; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof SILVisitor ) return ((SILVisitor<? extends T>)visitor).visitFunction_declaration(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Function_declarationContext function_declaration() throws RecognitionException {
		Function_declarationContext _localctx = new Function_declarationContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_function_declaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(85);
			match(FUNCTION);
			setState(86);
			match(Id);
			setState(87);
			match(L_PAR);
			setState(88);
			parameter_list();
			setState(89);
			block();
			setState(90);
			match(R_PAR);
			setState(91);
			block();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Function_callContext extends ParserRuleContext {
		public TerminalNode Id() { return getToken(SILParser.Id, 0); }
		public TerminalNode L_PAR() { return getToken(SILParser.L_PAR, 0); }
		public Argument_listContext argument_list() {
			return getRuleContext(Argument_listContext.class,0);
		}
		public TerminalNode R_PAR() { return getToken(SILParser.R_PAR, 0); }
		public Function_callContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_function_call; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof SILVisitor ) return ((SILVisitor<? extends T>)visitor).visitFunction_call(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Function_callContext function_call() throws RecognitionException {
		Function_callContext _localctx = new Function_callContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_function_call);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(93);
			match(Id);
			setState(94);
			match(L_PAR);
			setState(95);
			argument_list();
			setState(96);
			match(R_PAR);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Parameter_listContext extends ParserRuleContext {
		public List<Variable_declarationContext> variable_declaration() {
			return getRuleContexts(Variable_declarationContext.class);
		}
		public Variable_declarationContext variable_declaration(int i) {
			return getRuleContext(Variable_declarationContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(SILParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(SILParser.COMMA, i);
		}
		public Parameter_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parameter_list; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof SILVisitor ) return ((SILVisitor<? extends T>)visitor).visitParameter_list(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Parameter_listContext parameter_list() throws RecognitionException {
		Parameter_listContext _localctx = new Parameter_listContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_parameter_list);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(106);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==VAR) {
				{
				setState(98);
				variable_declaration();
				setState(103);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(99);
					match(COMMA);
					setState(100);
					variable_declaration();
					}
					}
					setState(105);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Argument_listContext extends ParserRuleContext {
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(SILParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(SILParser.COMMA, i);
		}
		public Argument_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_argument_list; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof SILVisitor ) return ((SILVisitor<? extends T>)visitor).visitArgument_list(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Argument_listContext argument_list() throws RecognitionException {
		Argument_listContext _localctx = new Argument_listContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_argument_list);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(116);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Id) | (1L << L_PAR) | (1L << MINUS) | (1L << NUMBER) | (1L << NOT) | (1L << TRUE) | (1L << FALSE))) != 0)) {
				{
				setState(108);
				expression();
				setState(113);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(109);
					match(COMMA);
					setState(110);
					expression();
					}
					}
					setState(115);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Variable_declarationContext extends ParserRuleContext {
		public TerminalNode VAR() { return getToken(SILParser.VAR, 0); }
		public TerminalNode Id() { return getToken(SILParser.Id, 0); }
		public TerminalNode SEP() { return getToken(SILParser.SEP, 0); }
		public TerminalNode TYPE() { return getToken(SILParser.TYPE, 0); }
		public Variable_declarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_variable_declaration; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof SILVisitor ) return ((SILVisitor<? extends T>)visitor).visitVariable_declaration(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Variable_declarationContext variable_declaration() throws RecognitionException {
		Variable_declarationContext _localctx = new Variable_declarationContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_variable_declaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(118);
			match(VAR);
			setState(121);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==SEP) {
				{
				setState(119);
				match(SEP);
				setState(120);
				match(TYPE);
				}
			}

			setState(123);
			match(Id);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Variable_creationContext extends ParserRuleContext {
		public Variable_declarationContext variable_declaration() {
			return getRuleContext(Variable_declarationContext.class,0);
		}
		public TerminalNode AFF() { return getToken(SILParser.AFF, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public Variable_creationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_variable_creation; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof SILVisitor ) return ((SILVisitor<? extends T>)visitor).visitVariable_creation(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Variable_creationContext variable_creation() throws RecognitionException {
		Variable_creationContext _localctx = new Variable_creationContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_variable_creation);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(125);
			variable_declaration();
			setState(128);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AFF) {
				{
				setState(126);
				match(AFF);
				setState(127);
				expression();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Variable_affectationContext extends ParserRuleContext {
		public TerminalNode Id() { return getToken(SILParser.Id, 0); }
		public TerminalNode AFF() { return getToken(SILParser.AFF, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public Variable_affectationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_variable_affectation; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof SILVisitor ) return ((SILVisitor<? extends T>)visitor).visitVariable_affectation(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Variable_affectationContext variable_affectation() throws RecognitionException {
		Variable_affectationContext _localctx = new Variable_affectationContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_variable_affectation);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(130);
			match(Id);
			setState(131);
			match(AFF);
			setState(132);
			expression();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class InstructionContext extends ParserRuleContext {
		public BlockContext block() {
			return getRuleContext(BlockContext.class,0);
		}
		public ActionContext action() {
			return getRuleContext(ActionContext.class,0);
		}
		public InstructionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_instruction; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof SILVisitor ) return ((SILVisitor<? extends T>)visitor).visitInstruction(this);
			else return visitor.visitChildren(this);
		}
	}

	public final InstructionContext instruction() throws RecognitionException {
		InstructionContext _localctx = new InstructionContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_instruction);
		try {
			setState(136);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case L_BRACKET:
				enterOuterAlt(_localctx, 1);
				{
				setState(134);
				block();
				}
				break;
			case Id:
			case VAR:
			case OUT:
			case IN:
			case PAUSE:
				enterOuterAlt(_localctx, 2);
				{
				setState(135);
				action();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class BlockContext extends ParserRuleContext {
		public TerminalNode L_BRACKET() { return getToken(SILParser.L_BRACKET, 0); }
		public TerminalNode Newline() { return getToken(SILParser.Newline, 0); }
		public Instruction_listContext instruction_list() {
			return getRuleContext(Instruction_listContext.class,0);
		}
		public TerminalNode R_BRACKET() { return getToken(SILParser.R_BRACKET, 0); }
		public BlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_block; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof SILVisitor ) return ((SILVisitor<? extends T>)visitor).visitBlock(this);
			else return visitor.visitChildren(this);
		}
	}

	public final BlockContext block() throws RecognitionException {
		BlockContext _localctx = new BlockContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_block);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(138);
			match(L_BRACKET);
			setState(139);
			match(Newline);
			setState(140);
			instruction_list();
			setState(141);
			match(R_BRACKET);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Instruction_listContext extends ParserRuleContext {
		public InstructionContext instruction;
		public List<InstructionContext> instructions = new ArrayList<InstructionContext>();
		public List<TerminalNode> Newline() { return getTokens(SILParser.Newline); }
		public TerminalNode Newline(int i) {
			return getToken(SILParser.Newline, i);
		}
		public List<InstructionContext> instruction() {
			return getRuleContexts(InstructionContext.class);
		}
		public InstructionContext instruction(int i) {
			return getRuleContext(InstructionContext.class,i);
		}
		public Instruction_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_instruction_list; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof SILVisitor ) return ((SILVisitor<? extends T>)visitor).visitInstruction_list(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Instruction_listContext instruction_list() throws RecognitionException {
		Instruction_listContext _localctx = new Instruction_listContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_instruction_list);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(148);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,11,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(143);
					((Instruction_listContext)_localctx).instruction = instruction();
					((Instruction_listContext)_localctx).instructions.add(((Instruction_listContext)_localctx).instruction);
					setState(144);
					match(Newline);
					}
					} 
				}
				setState(150);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,11,_ctx);
			}
			setState(152);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Id) | (1L << VAR) | (1L << L_BRACKET) | (1L << OUT) | (1L << IN) | (1L << PAUSE))) != 0)) {
				{
				setState(151);
				((Instruction_listContext)_localctx).instruction = instruction();
				((Instruction_listContext)_localctx).instructions.add(((Instruction_listContext)_localctx).instruction);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ActionContext extends ParserRuleContext {
		public Variable_creationContext variable_creation() {
			return getRuleContext(Variable_creationContext.class,0);
		}
		public Variable_affectationContext variable_affectation() {
			return getRuleContext(Variable_affectationContext.class,0);
		}
		public TerminalNode OUT() { return getToken(SILParser.OUT, 0); }
		public Expression_listContext expression_list() {
			return getRuleContext(Expression_listContext.class,0);
		}
		public TerminalNode IN() { return getToken(SILParser.IN, 0); }
		public TerminalNode Id() { return getToken(SILParser.Id, 0); }
		public TerminalNode PAUSE() { return getToken(SILParser.PAUSE, 0); }
		public ActionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_action; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof SILVisitor ) return ((SILVisitor<? extends T>)visitor).visitAction(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ActionContext action() throws RecognitionException {
		ActionContext _localctx = new ActionContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_action);
		try {
			setState(161);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case VAR:
				enterOuterAlt(_localctx, 1);
				{
				setState(154);
				variable_creation();
				}
				break;
			case Id:
				enterOuterAlt(_localctx, 2);
				{
				setState(155);
				variable_affectation();
				}
				break;
			case OUT:
				enterOuterAlt(_localctx, 3);
				{
				setState(156);
				match(OUT);
				setState(157);
				expression_list();
				}
				break;
			case IN:
				enterOuterAlt(_localctx, 4);
				{
				setState(158);
				match(IN);
				setState(159);
				match(Id);
				}
				break;
			case PAUSE:
				enterOuterAlt(_localctx, 5);
				{
				setState(160);
				match(PAUSE);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Expression_listContext extends ParserRuleContext {
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(SILParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(SILParser.COMMA, i);
		}
		public Expression_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expression_list; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof SILVisitor ) return ((SILVisitor<? extends T>)visitor).visitExpression_list(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Expression_listContext expression_list() throws RecognitionException {
		Expression_listContext _localctx = new Expression_listContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_expression_list);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(171);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Id) | (1L << L_PAR) | (1L << MINUS) | (1L << NUMBER) | (1L << NOT) | (1L << TRUE) | (1L << FALSE))) != 0)) {
				{
				setState(163);
				expression();
				setState(168);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(164);
					match(COMMA);
					setState(165);
					expression();
					}
					}
					setState(170);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExpressionContext extends ParserRuleContext {
		public Numeric_expressionContext numeric_expression() {
			return getRuleContext(Numeric_expressionContext.class,0);
		}
		public Boolean_expressionContext boolean_expression() {
			return getRuleContext(Boolean_expressionContext.class,0);
		}
		public ExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expression; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof SILVisitor ) return ((SILVisitor<? extends T>)visitor).visitExpression(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ExpressionContext expression() throws RecognitionException {
		ExpressionContext _localctx = new ExpressionContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_expression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(175);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,16,_ctx) ) {
			case 1:
				{
				setState(173);
				numeric_expression();
				}
				break;
			case 2:
				{
				setState(174);
				boolean_expression();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Numeric_expressionContext extends ParserRuleContext {
		public Numeric_mul_divContext numeric_mul_div;
		public List<Numeric_mul_divContext> value = new ArrayList<Numeric_mul_divContext>();
		public Token PLUS;
		public List<Token> op = new ArrayList<Token>();
		public Token MINUS;
		public Token _tset873;
		public List<Numeric_mul_divContext> numeric_mul_div() {
			return getRuleContexts(Numeric_mul_divContext.class);
		}
		public Numeric_mul_divContext numeric_mul_div(int i) {
			return getRuleContext(Numeric_mul_divContext.class,i);
		}
		public List<TerminalNode> PLUS() { return getTokens(SILParser.PLUS); }
		public TerminalNode PLUS(int i) {
			return getToken(SILParser.PLUS, i);
		}
		public List<TerminalNode> MINUS() { return getTokens(SILParser.MINUS); }
		public TerminalNode MINUS(int i) {
			return getToken(SILParser.MINUS, i);
		}
		public Numeric_expressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_numeric_expression; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof SILVisitor ) return ((SILVisitor<? extends T>)visitor).visitNumeric_expression(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Numeric_expressionContext numeric_expression() throws RecognitionException {
		Numeric_expressionContext _localctx = new Numeric_expressionContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_numeric_expression);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(177);
			((Numeric_expressionContext)_localctx).numeric_mul_div = numeric_mul_div();
			((Numeric_expressionContext)_localctx).value.add(((Numeric_expressionContext)_localctx).numeric_mul_div);
			setState(182);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==PLUS || _la==MINUS) {
				{
				{
				setState(178);
				((Numeric_expressionContext)_localctx)._tset873 = _input.LT(1);
				_la = _input.LA(1);
				if ( !(_la==PLUS || _la==MINUS) ) {
					((Numeric_expressionContext)_localctx)._tset873 = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				((Numeric_expressionContext)_localctx).op.add(((Numeric_expressionContext)_localctx)._tset873);
				setState(179);
				((Numeric_expressionContext)_localctx).numeric_mul_div = numeric_mul_div();
				((Numeric_expressionContext)_localctx).value.add(((Numeric_expressionContext)_localctx).numeric_mul_div);
				}
				}
				setState(184);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Numeric_mul_divContext extends ParserRuleContext {
		public Numeric_powContext numeric_pow;
		public List<Numeric_powContext> value = new ArrayList<Numeric_powContext>();
		public Token STAR;
		public List<Token> op = new ArrayList<Token>();
		public Token SLASH;
		public Token _tset897;
		public List<Numeric_powContext> numeric_pow() {
			return getRuleContexts(Numeric_powContext.class);
		}
		public Numeric_powContext numeric_pow(int i) {
			return getRuleContext(Numeric_powContext.class,i);
		}
		public List<TerminalNode> STAR() { return getTokens(SILParser.STAR); }
		public TerminalNode STAR(int i) {
			return getToken(SILParser.STAR, i);
		}
		public List<TerminalNode> SLASH() { return getTokens(SILParser.SLASH); }
		public TerminalNode SLASH(int i) {
			return getToken(SILParser.SLASH, i);
		}
		public Numeric_mul_divContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_numeric_mul_div; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof SILVisitor ) return ((SILVisitor<? extends T>)visitor).visitNumeric_mul_div(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Numeric_mul_divContext numeric_mul_div() throws RecognitionException {
		Numeric_mul_divContext _localctx = new Numeric_mul_divContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_numeric_mul_div);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(185);
			((Numeric_mul_divContext)_localctx).numeric_pow = numeric_pow();
			((Numeric_mul_divContext)_localctx).value.add(((Numeric_mul_divContext)_localctx).numeric_pow);
			setState(190);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==STAR || _la==SLASH) {
				{
				{
				setState(186);
				((Numeric_mul_divContext)_localctx)._tset897 = _input.LT(1);
				_la = _input.LA(1);
				if ( !(_la==STAR || _la==SLASH) ) {
					((Numeric_mul_divContext)_localctx)._tset897 = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				((Numeric_mul_divContext)_localctx).op.add(((Numeric_mul_divContext)_localctx)._tset897);
				setState(187);
				((Numeric_mul_divContext)_localctx).numeric_pow = numeric_pow();
				((Numeric_mul_divContext)_localctx).value.add(((Numeric_mul_divContext)_localctx).numeric_pow);
				}
				}
				setState(192);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Numeric_powContext extends ParserRuleContext {
		public Numeric_inversionContext numeric_inversion;
		public List<Numeric_inversionContext> value = new ArrayList<Numeric_inversionContext>();
		public List<Numeric_inversionContext> numeric_inversion() {
			return getRuleContexts(Numeric_inversionContext.class);
		}
		public Numeric_inversionContext numeric_inversion(int i) {
			return getRuleContext(Numeric_inversionContext.class,i);
		}
		public List<TerminalNode> POWER() { return getTokens(SILParser.POWER); }
		public TerminalNode POWER(int i) {
			return getToken(SILParser.POWER, i);
		}
		public Numeric_powContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_numeric_pow; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof SILVisitor ) return ((SILVisitor<? extends T>)visitor).visitNumeric_pow(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Numeric_powContext numeric_pow() throws RecognitionException {
		Numeric_powContext _localctx = new Numeric_powContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_numeric_pow);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(193);
			((Numeric_powContext)_localctx).numeric_inversion = numeric_inversion();
			((Numeric_powContext)_localctx).value.add(((Numeric_powContext)_localctx).numeric_inversion);
			setState(198);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==POWER) {
				{
				{
				setState(194);
				match(POWER);
				setState(195);
				((Numeric_powContext)_localctx).numeric_inversion = numeric_inversion();
				((Numeric_powContext)_localctx).value.add(((Numeric_powContext)_localctx).numeric_inversion);
				}
				}
				setState(200);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Numeric_inversionContext extends ParserRuleContext {
		public Numeric_castContext numeric_cast() {
			return getRuleContext(Numeric_castContext.class,0);
		}
		public TerminalNode MINUS() { return getToken(SILParser.MINUS, 0); }
		public Numeric_inversionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_numeric_inversion; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof SILVisitor ) return ((SILVisitor<? extends T>)visitor).visitNumeric_inversion(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Numeric_inversionContext numeric_inversion() throws RecognitionException {
		Numeric_inversionContext _localctx = new Numeric_inversionContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_numeric_inversion);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(202);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==MINUS) {
				{
				setState(201);
				match(MINUS);
				}
			}

			setState(204);
			numeric_cast();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Numeric_castContext extends ParserRuleContext {
		public Numeric_atomContext numeric_atom() {
			return getRuleContext(Numeric_atomContext.class,0);
		}
		public CastContext cast() {
			return getRuleContext(CastContext.class,0);
		}
		public Numeric_castContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_numeric_cast; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof SILVisitor ) return ((SILVisitor<? extends T>)visitor).visitNumeric_cast(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Numeric_castContext numeric_cast() throws RecognitionException {
		Numeric_castContext _localctx = new Numeric_castContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_numeric_cast);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(208);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,21,_ctx) ) {
			case 1:
				{
				setState(206);
				numeric_atom();
				}
				break;
			case 2:
				{
				setState(207);
				cast();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Numeric_atomContext extends ParserRuleContext {
		public TerminalNode NUMBER() { return getToken(SILParser.NUMBER, 0); }
		public TerminalNode Id() { return getToken(SILParser.Id, 0); }
		public Function_callContext function_call() {
			return getRuleContext(Function_callContext.class,0);
		}
		public TerminalNode L_PAR() { return getToken(SILParser.L_PAR, 0); }
		public Numeric_expressionContext numeric_expression() {
			return getRuleContext(Numeric_expressionContext.class,0);
		}
		public TerminalNode R_PAR() { return getToken(SILParser.R_PAR, 0); }
		public Numeric_atomContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_numeric_atom; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof SILVisitor ) return ((SILVisitor<? extends T>)visitor).visitNumeric_atom(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Numeric_atomContext numeric_atom() throws RecognitionException {
		Numeric_atomContext _localctx = new Numeric_atomContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_numeric_atom);
		try {
			setState(217);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,22,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(210);
				match(NUMBER);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(211);
				match(Id);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(212);
				function_call();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(213);
				match(L_PAR);
				setState(214);
				numeric_expression();
				setState(215);
				match(R_PAR);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Boolean_expressionContext extends ParserRuleContext {
		public Boolean_andContext boolean_and;
		public List<Boolean_andContext> value = new ArrayList<Boolean_andContext>();
		public List<Boolean_andContext> boolean_and() {
			return getRuleContexts(Boolean_andContext.class);
		}
		public Boolean_andContext boolean_and(int i) {
			return getRuleContext(Boolean_andContext.class,i);
		}
		public List<TerminalNode> OR() { return getTokens(SILParser.OR); }
		public TerminalNode OR(int i) {
			return getToken(SILParser.OR, i);
		}
		public Boolean_expressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_boolean_expression; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof SILVisitor ) return ((SILVisitor<? extends T>)visitor).visitBoolean_expression(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Boolean_expressionContext boolean_expression() throws RecognitionException {
		Boolean_expressionContext _localctx = new Boolean_expressionContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_boolean_expression);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(219);
			((Boolean_expressionContext)_localctx).boolean_and = boolean_and();
			((Boolean_expressionContext)_localctx).value.add(((Boolean_expressionContext)_localctx).boolean_and);
			setState(224);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==OR) {
				{
				{
				setState(220);
				match(OR);
				setState(221);
				((Boolean_expressionContext)_localctx).boolean_and = boolean_and();
				((Boolean_expressionContext)_localctx).value.add(((Boolean_expressionContext)_localctx).boolean_and);
				}
				}
				setState(226);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Boolean_andContext extends ParserRuleContext {
		public Boolean_comparatorContext boolean_comparator;
		public List<Boolean_comparatorContext> value = new ArrayList<Boolean_comparatorContext>();
		public List<Boolean_comparatorContext> boolean_comparator() {
			return getRuleContexts(Boolean_comparatorContext.class);
		}
		public Boolean_comparatorContext boolean_comparator(int i) {
			return getRuleContext(Boolean_comparatorContext.class,i);
		}
		public List<TerminalNode> AND() { return getTokens(SILParser.AND); }
		public TerminalNode AND(int i) {
			return getToken(SILParser.AND, i);
		}
		public Boolean_andContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_boolean_and; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof SILVisitor ) return ((SILVisitor<? extends T>)visitor).visitBoolean_and(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Boolean_andContext boolean_and() throws RecognitionException {
		Boolean_andContext _localctx = new Boolean_andContext(_ctx, getState());
		enterRule(_localctx, 46, RULE_boolean_and);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(227);
			((Boolean_andContext)_localctx).boolean_comparator = boolean_comparator();
			((Boolean_andContext)_localctx).value.add(((Boolean_andContext)_localctx).boolean_comparator);
			setState(232);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==AND) {
				{
				{
				setState(228);
				match(AND);
				setState(229);
				((Boolean_andContext)_localctx).boolean_comparator = boolean_comparator();
				((Boolean_andContext)_localctx).value.add(((Boolean_andContext)_localctx).boolean_comparator);
				}
				}
				setState(234);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Boolean_comparatorContext extends ParserRuleContext {
		public Boolean_notContext left;
		public Token comparator;
		public Boolean_notContext right;
		public List<Boolean_notContext> boolean_not() {
			return getRuleContexts(Boolean_notContext.class);
		}
		public Boolean_notContext boolean_not(int i) {
			return getRuleContext(Boolean_notContext.class,i);
		}
		public TerminalNode EQU() { return getToken(SILParser.EQU, 0); }
		public TerminalNode DIF() { return getToken(SILParser.DIF, 0); }
		public TerminalNode LT() { return getToken(SILParser.LT, 0); }
		public TerminalNode GT() { return getToken(SILParser.GT, 0); }
		public TerminalNode LEQ() { return getToken(SILParser.LEQ, 0); }
		public TerminalNode GEQ() { return getToken(SILParser.GEQ, 0); }
		public Boolean_comparatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_boolean_comparator; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof SILVisitor ) return ((SILVisitor<? extends T>)visitor).visitBoolean_comparator(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Boolean_comparatorContext boolean_comparator() throws RecognitionException {
		Boolean_comparatorContext _localctx = new Boolean_comparatorContext(_ctx, getState());
		enterRule(_localctx, 48, RULE_boolean_comparator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(235);
			((Boolean_comparatorContext)_localctx).left = boolean_not();
			setState(238);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << EQU) | (1L << DIF) | (1L << LT) | (1L << GT) | (1L << LEQ) | (1L << GEQ))) != 0)) {
				{
				setState(236);
				((Boolean_comparatorContext)_localctx).comparator = _input.LT(1);
				_la = _input.LA(1);
				if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << EQU) | (1L << DIF) | (1L << LT) | (1L << GT) | (1L << LEQ) | (1L << GEQ))) != 0)) ) {
					((Boolean_comparatorContext)_localctx).comparator = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(237);
				((Boolean_comparatorContext)_localctx).right = boolean_not();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Boolean_notContext extends ParserRuleContext {
		public Boolean_castContext boolean_cast() {
			return getRuleContext(Boolean_castContext.class,0);
		}
		public TerminalNode NOT() { return getToken(SILParser.NOT, 0); }
		public Boolean_notContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_boolean_not; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof SILVisitor ) return ((SILVisitor<? extends T>)visitor).visitBoolean_not(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Boolean_notContext boolean_not() throws RecognitionException {
		Boolean_notContext _localctx = new Boolean_notContext(_ctx, getState());
		enterRule(_localctx, 50, RULE_boolean_not);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(241);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NOT) {
				{
				setState(240);
				match(NOT);
				}
			}

			setState(243);
			boolean_cast();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Boolean_castContext extends ParserRuleContext {
		public Boolean_atomContext boolean_atom() {
			return getRuleContext(Boolean_atomContext.class,0);
		}
		public CastContext cast() {
			return getRuleContext(CastContext.class,0);
		}
		public Boolean_castContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_boolean_cast; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof SILVisitor ) return ((SILVisitor<? extends T>)visitor).visitBoolean_cast(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Boolean_castContext boolean_cast() throws RecognitionException {
		Boolean_castContext _localctx = new Boolean_castContext(_ctx, getState());
		enterRule(_localctx, 52, RULE_boolean_cast);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(247);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,27,_ctx) ) {
			case 1:
				{
				setState(245);
				boolean_atom();
				}
				break;
			case 2:
				{
				setState(246);
				cast();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Boolean_atomContext extends ParserRuleContext {
		public TerminalNode TRUE() { return getToken(SILParser.TRUE, 0); }
		public TerminalNode FALSE() { return getToken(SILParser.FALSE, 0); }
		public TerminalNode Id() { return getToken(SILParser.Id, 0); }
		public Function_callContext function_call() {
			return getRuleContext(Function_callContext.class,0);
		}
		public TerminalNode L_PAR() { return getToken(SILParser.L_PAR, 0); }
		public Boolean_expressionContext boolean_expression() {
			return getRuleContext(Boolean_expressionContext.class,0);
		}
		public TerminalNode R_PAR() { return getToken(SILParser.R_PAR, 0); }
		public Boolean_atomContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_boolean_atom; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof SILVisitor ) return ((SILVisitor<? extends T>)visitor).visitBoolean_atom(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Boolean_atomContext boolean_atom() throws RecognitionException {
		Boolean_atomContext _localctx = new Boolean_atomContext(_ctx, getState());
		enterRule(_localctx, 54, RULE_boolean_atom);
		try {
			setState(257);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,28,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(249);
				match(TRUE);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(250);
				match(FALSE);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(251);
				match(Id);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(252);
				function_call();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(253);
				match(L_PAR);
				setState(254);
				boolean_expression();
				setState(255);
				match(R_PAR);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class String_expressionContext extends ParserRuleContext {
		public String_castContext string_cast;
		public List<String_castContext> value = new ArrayList<String_castContext>();
		public List<String_castContext> string_cast() {
			return getRuleContexts(String_castContext.class);
		}
		public String_castContext string_cast(int i) {
			return getRuleContext(String_castContext.class,i);
		}
		public List<TerminalNode> PLUS() { return getTokens(SILParser.PLUS); }
		public TerminalNode PLUS(int i) {
			return getToken(SILParser.PLUS, i);
		}
		public String_expressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_string_expression; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof SILVisitor ) return ((SILVisitor<? extends T>)visitor).visitString_expression(this);
			else return visitor.visitChildren(this);
		}
	}

	public final String_expressionContext string_expression() throws RecognitionException {
		String_expressionContext _localctx = new String_expressionContext(_ctx, getState());
		enterRule(_localctx, 56, RULE_string_expression);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(259);
			((String_expressionContext)_localctx).string_cast = string_cast();
			((String_expressionContext)_localctx).value.add(((String_expressionContext)_localctx).string_cast);
			setState(264);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==PLUS) {
				{
				{
				setState(260);
				match(PLUS);
				setState(261);
				string_cast();
				}
				}
				setState(266);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class String_castContext extends ParserRuleContext {
		public String_atomContext string_atom() {
			return getRuleContext(String_atomContext.class,0);
		}
		public CastContext cast() {
			return getRuleContext(CastContext.class,0);
		}
		public String_castContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_string_cast; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof SILVisitor ) return ((SILVisitor<? extends T>)visitor).visitString_cast(this);
			else return visitor.visitChildren(this);
		}
	}

	public final String_castContext string_cast() throws RecognitionException {
		String_castContext _localctx = new String_castContext(_ctx, getState());
		enterRule(_localctx, 58, RULE_string_cast);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(269);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,30,_ctx) ) {
			case 1:
				{
				setState(267);
				string_atom();
				}
				break;
			case 2:
				{
				setState(268);
				cast();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class String_atomContext extends ParserRuleContext {
		public TerminalNode String() { return getToken(SILParser.String, 0); }
		public TerminalNode Id() { return getToken(SILParser.Id, 0); }
		public Function_callContext function_call() {
			return getRuleContext(Function_callContext.class,0);
		}
		public String_atomContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_string_atom; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof SILVisitor ) return ((SILVisitor<? extends T>)visitor).visitString_atom(this);
			else return visitor.visitChildren(this);
		}
	}

	public final String_atomContext string_atom() throws RecognitionException {
		String_atomContext _localctx = new String_atomContext(_ctx, getState());
		enterRule(_localctx, 60, RULE_string_atom);
		try {
			setState(274);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,31,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(271);
				match(String);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(272);
				match(Id);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(273);
				function_call();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CastContext extends ParserRuleContext {
		public TerminalNode SEP() { return getToken(SILParser.SEP, 0); }
		public TerminalNode TYPE() { return getToken(SILParser.TYPE, 0); }
		public Numeric_atomContext numeric_atom() {
			return getRuleContext(Numeric_atomContext.class,0);
		}
		public Boolean_atomContext boolean_atom() {
			return getRuleContext(Boolean_atomContext.class,0);
		}
		public CastContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_cast; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof SILVisitor ) return ((SILVisitor<? extends T>)visitor).visitCast(this);
			else return visitor.visitChildren(this);
		}
	}

	public final CastContext cast() throws RecognitionException {
		CastContext _localctx = new CastContext(_ctx, getState());
		enterRule(_localctx, 62, RULE_cast);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(278);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,32,_ctx) ) {
			case 1:
				{
				setState(276);
				numeric_atom();
				}
				break;
			case 2:
				{
				setState(277);
				boolean_atom();
				}
				break;
			}
			setState(280);
			match(SEP);
			setState(281);
			match(TYPE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3#\u011e\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\3\2\5\2D\n\2\3\2\3\2\3\2\3\3\3\3\3\3\7\3L\n\3\f\3\16\3O\13\3\3\3\5"+
		"\3R\n\3\3\4\3\4\5\4V\n\4\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\6\3\6\3\6\3"+
		"\6\3\6\3\7\3\7\3\7\7\7h\n\7\f\7\16\7k\13\7\5\7m\n\7\3\b\3\b\3\b\7\br\n"+
		"\b\f\b\16\bu\13\b\5\bw\n\b\3\t\3\t\3\t\5\t|\n\t\3\t\3\t\3\n\3\n\3\n\5"+
		"\n\u0083\n\n\3\13\3\13\3\13\3\13\3\f\3\f\5\f\u008b\n\f\3\r\3\r\3\r\3\r"+
		"\3\r\3\16\3\16\3\16\7\16\u0095\n\16\f\16\16\16\u0098\13\16\3\16\5\16\u009b"+
		"\n\16\3\17\3\17\3\17\3\17\3\17\3\17\3\17\5\17\u00a4\n\17\3\20\3\20\3\20"+
		"\7\20\u00a9\n\20\f\20\16\20\u00ac\13\20\5\20\u00ae\n\20\3\21\3\21\5\21"+
		"\u00b2\n\21\3\22\3\22\3\22\7\22\u00b7\n\22\f\22\16\22\u00ba\13\22\3\23"+
		"\3\23\3\23\7\23\u00bf\n\23\f\23\16\23\u00c2\13\23\3\24\3\24\3\24\7\24"+
		"\u00c7\n\24\f\24\16\24\u00ca\13\24\3\25\5\25\u00cd\n\25\3\25\3\25\3\26"+
		"\3\26\5\26\u00d3\n\26\3\27\3\27\3\27\3\27\3\27\3\27\3\27\5\27\u00dc\n"+
		"\27\3\30\3\30\3\30\7\30\u00e1\n\30\f\30\16\30\u00e4\13\30\3\31\3\31\3"+
		"\31\7\31\u00e9\n\31\f\31\16\31\u00ec\13\31\3\32\3\32\3\32\5\32\u00f1\n"+
		"\32\3\33\5\33\u00f4\n\33\3\33\3\33\3\34\3\34\5\34\u00fa\n\34\3\35\3\35"+
		"\3\35\3\35\3\35\3\35\3\35\3\35\5\35\u0104\n\35\3\36\3\36\3\36\7\36\u0109"+
		"\n\36\f\36\16\36\u010c\13\36\3\37\3\37\5\37\u0110\n\37\3 \3 \3 \5 \u0115"+
		"\n \3!\3!\5!\u0119\n!\3!\3!\3!\3!\2\2\"\2\4\6\b\n\f\16\20\22\24\26\30"+
		"\32\34\36 \"$&(*,.\60\62\64\668:<>@\2\5\3\2\22\23\3\2\24\25\3\2\32\37"+
		"\2\u0127\2C\3\2\2\2\4M\3\2\2\2\6U\3\2\2\2\bW\3\2\2\2\n_\3\2\2\2\fl\3\2"+
		"\2\2\16v\3\2\2\2\20x\3\2\2\2\22\177\3\2\2\2\24\u0084\3\2\2\2\26\u008a"+
		"\3\2\2\2\30\u008c\3\2\2\2\32\u0096\3\2\2\2\34\u00a3\3\2\2\2\36\u00ad\3"+
		"\2\2\2 \u00b1\3\2\2\2\"\u00b3\3\2\2\2$\u00bb\3\2\2\2&\u00c3\3\2\2\2(\u00cc"+
		"\3\2\2\2*\u00d2\3\2\2\2,\u00db\3\2\2\2.\u00dd\3\2\2\2\60\u00e5\3\2\2\2"+
		"\62\u00ed\3\2\2\2\64\u00f3\3\2\2\2\66\u00f9\3\2\2\28\u0103\3\2\2\2:\u0105"+
		"\3\2\2\2<\u010f\3\2\2\2>\u0114\3\2\2\2@\u0118\3\2\2\2BD\7\3\2\2CB\3\2"+
		"\2\2CD\3\2\2\2DE\3\2\2\2EF\5\4\3\2FG\7\2\2\3G\3\3\2\2\2HI\5\6\4\2IJ\7"+
		"\3\2\2JL\3\2\2\2KH\3\2\2\2LO\3\2\2\2MK\3\2\2\2MN\3\2\2\2NQ\3\2\2\2OM\3"+
		"\2\2\2PR\5\6\4\2QP\3\2\2\2QR\3\2\2\2R\5\3\2\2\2SV\5\b\5\2TV\5\26\f\2U"+
		"S\3\2\2\2UT\3\2\2\2V\7\3\2\2\2WX\7\4\2\2XY\7\5\2\2YZ\7\6\2\2Z[\5\f\7\2"+
		"[\\\5\30\r\2\\]\7\7\2\2]^\5\30\r\2^\t\3\2\2\2_`\7\5\2\2`a\7\6\2\2ab\5"+
		"\16\b\2bc\7\7\2\2c\13\3\2\2\2di\5\20\t\2ef\7\b\2\2fh\5\20\t\2ge\3\2\2"+
		"\2hk\3\2\2\2ig\3\2\2\2ij\3\2\2\2jm\3\2\2\2ki\3\2\2\2ld\3\2\2\2lm\3\2\2"+
		"\2m\r\3\2\2\2ns\5 \21\2op\7\b\2\2pr\5 \21\2qo\3\2\2\2ru\3\2\2\2sq\3\2"+
		"\2\2st\3\2\2\2tw\3\2\2\2us\3\2\2\2vn\3\2\2\2vw\3\2\2\2w\17\3\2\2\2x{\7"+
		"\t\2\2yz\7\n\2\2z|\7\13\2\2{y\3\2\2\2{|\3\2\2\2|}\3\2\2\2}~\7\5\2\2~\21"+
		"\3\2\2\2\177\u0082\5\20\t\2\u0080\u0081\7\f\2\2\u0081\u0083\5 \21\2\u0082"+
		"\u0080\3\2\2\2\u0082\u0083\3\2\2\2\u0083\23\3\2\2\2\u0084\u0085\7\5\2"+
		"\2\u0085\u0086\7\f\2\2\u0086\u0087\5 \21\2\u0087\25\3\2\2\2\u0088\u008b"+
		"\5\30\r\2\u0089\u008b\5\34\17\2\u008a\u0088\3\2\2\2\u008a\u0089\3\2\2"+
		"\2\u008b\27\3\2\2\2\u008c\u008d\7\r\2\2\u008d\u008e\7\3\2\2\u008e\u008f"+
		"\5\32\16\2\u008f\u0090\7\16\2\2\u0090\31\3\2\2\2\u0091\u0092\5\26\f\2"+
		"\u0092\u0093\7\3\2\2\u0093\u0095\3\2\2\2\u0094\u0091\3\2\2\2\u0095\u0098"+
		"\3\2\2\2\u0096\u0094\3\2\2\2\u0096\u0097\3\2\2\2\u0097\u009a\3\2\2\2\u0098"+
		"\u0096\3\2\2\2\u0099\u009b\5\26\f\2\u009a\u0099\3\2\2\2\u009a\u009b\3"+
		"\2\2\2\u009b\33\3\2\2\2\u009c\u00a4\5\22\n\2\u009d\u00a4\5\24\13\2\u009e"+
		"\u009f\7\17\2\2\u009f\u00a4\5\36\20\2\u00a0\u00a1\7\20\2\2\u00a1\u00a4"+
		"\7\5\2\2\u00a2\u00a4\7\21\2\2\u00a3\u009c\3\2\2\2\u00a3\u009d\3\2\2\2"+
		"\u00a3\u009e\3\2\2\2\u00a3\u00a0\3\2\2\2\u00a3\u00a2\3\2\2\2\u00a4\35"+
		"\3\2\2\2\u00a5\u00aa\5 \21\2\u00a6\u00a7\7\b\2\2\u00a7\u00a9\5 \21\2\u00a8"+
		"\u00a6\3\2\2\2\u00a9\u00ac\3\2\2\2\u00aa\u00a8\3\2\2\2\u00aa\u00ab\3\2"+
		"\2\2\u00ab\u00ae\3\2\2\2\u00ac\u00aa\3\2\2\2\u00ad\u00a5\3\2\2\2\u00ad"+
		"\u00ae\3\2\2\2\u00ae\37\3\2\2\2\u00af\u00b2\5\"\22\2\u00b0\u00b2\5.\30"+
		"\2\u00b1\u00af\3\2\2\2\u00b1\u00b0\3\2\2\2\u00b2!\3\2\2\2\u00b3\u00b8"+
		"\5$\23\2\u00b4\u00b5\t\2\2\2\u00b5\u00b7\5$\23\2\u00b6\u00b4\3\2\2\2\u00b7"+
		"\u00ba\3\2\2\2\u00b8\u00b6\3\2\2\2\u00b8\u00b9\3\2\2\2\u00b9#\3\2\2\2"+
		"\u00ba\u00b8\3\2\2\2\u00bb\u00c0\5&\24\2\u00bc\u00bd\t\3\2\2\u00bd\u00bf"+
		"\5&\24\2\u00be\u00bc\3\2\2\2\u00bf\u00c2\3\2\2\2\u00c0\u00be\3\2\2\2\u00c0"+
		"\u00c1\3\2\2\2\u00c1%\3\2\2\2\u00c2\u00c0\3\2\2\2\u00c3\u00c8\5(\25\2"+
		"\u00c4\u00c5\7\26\2\2\u00c5\u00c7\5(\25\2\u00c6\u00c4\3\2\2\2\u00c7\u00ca"+
		"\3\2\2\2\u00c8\u00c6\3\2\2\2\u00c8\u00c9\3\2\2\2\u00c9\'\3\2\2\2\u00ca"+
		"\u00c8\3\2\2\2\u00cb\u00cd\7\23\2\2\u00cc\u00cb\3\2\2\2\u00cc\u00cd\3"+
		"\2\2\2\u00cd\u00ce\3\2\2\2\u00ce\u00cf\5*\26\2\u00cf)\3\2\2\2\u00d0\u00d3"+
		"\5,\27\2\u00d1\u00d3\5@!\2\u00d2\u00d0\3\2\2\2\u00d2\u00d1\3\2\2\2\u00d3"+
		"+\3\2\2\2\u00d4\u00dc\7\27\2\2\u00d5\u00dc\7\5\2\2\u00d6\u00dc\5\n\6\2"+
		"\u00d7\u00d8\7\6\2\2\u00d8\u00d9\5\"\22\2\u00d9\u00da\7\7\2\2\u00da\u00dc"+
		"\3\2\2\2\u00db\u00d4\3\2\2\2\u00db\u00d5\3\2\2\2\u00db\u00d6\3\2\2\2\u00db"+
		"\u00d7\3\2\2\2\u00dc-\3\2\2\2\u00dd\u00e2\5\60\31\2\u00de\u00df\7\30\2"+
		"\2\u00df\u00e1\5\60\31\2\u00e0\u00de\3\2\2\2\u00e1\u00e4\3\2\2\2\u00e2"+
		"\u00e0\3\2\2\2\u00e2\u00e3\3\2\2\2\u00e3/\3\2\2\2\u00e4\u00e2\3\2\2\2"+
		"\u00e5\u00ea\5\62\32\2\u00e6\u00e7\7\31\2\2\u00e7\u00e9\5\62\32\2\u00e8"+
		"\u00e6\3\2\2\2\u00e9\u00ec\3\2\2\2\u00ea\u00e8\3\2\2\2\u00ea\u00eb\3\2"+
		"\2\2\u00eb\61\3\2\2\2\u00ec\u00ea\3\2\2\2\u00ed\u00f0\5\64\33\2\u00ee"+
		"\u00ef\t\4\2\2\u00ef\u00f1\5\64\33\2\u00f0\u00ee\3\2\2\2\u00f0\u00f1\3"+
		"\2\2\2\u00f1\63\3\2\2\2\u00f2\u00f4\7 \2\2\u00f3\u00f2\3\2\2\2\u00f3\u00f4"+
		"\3\2\2\2\u00f4\u00f5\3\2\2\2\u00f5\u00f6\5\66\34\2\u00f6\65\3\2\2\2\u00f7"+
		"\u00fa\58\35\2\u00f8\u00fa\5@!\2\u00f9\u00f7\3\2\2\2\u00f9\u00f8\3\2\2"+
		"\2\u00fa\67\3\2\2\2\u00fb\u0104\7!\2\2\u00fc\u0104\7\"\2\2\u00fd\u0104"+
		"\7\5\2\2\u00fe\u0104\5\n\6\2\u00ff\u0100\7\6\2\2\u0100\u0101\5.\30\2\u0101"+
		"\u0102\7\7\2\2\u0102\u0104\3\2\2\2\u0103\u00fb\3\2\2\2\u0103\u00fc\3\2"+
		"\2\2\u0103\u00fd\3\2\2\2\u0103\u00fe\3\2\2\2\u0103\u00ff\3\2\2\2\u0104"+
		"9\3\2\2\2\u0105\u010a\5<\37\2\u0106\u0107\7\22\2\2\u0107\u0109\5<\37\2"+
		"\u0108\u0106\3\2\2\2\u0109\u010c\3\2\2\2\u010a\u0108\3\2\2\2\u010a\u010b"+
		"\3\2\2\2\u010b;\3\2\2\2\u010c\u010a\3\2\2\2\u010d\u0110\5> \2\u010e\u0110"+
		"\5@!\2\u010f\u010d\3\2\2\2\u010f\u010e\3\2\2\2\u0110=\3\2\2\2\u0111\u0115"+
		"\7#\2\2\u0112\u0115\7\5\2\2\u0113\u0115\5\n\6\2\u0114\u0111\3\2\2\2\u0114"+
		"\u0112\3\2\2\2\u0114\u0113\3\2\2\2\u0115?\3\2\2\2\u0116\u0119\5,\27\2"+
		"\u0117\u0119\58\35\2\u0118\u0116\3\2\2\2\u0118\u0117\3\2\2\2\u0119\u011a"+
		"\3\2\2\2\u011a\u011b\7\n\2\2\u011b\u011c\7\13\2\2\u011cA\3\2\2\2#CMQU"+
		"ilsv{\u0082\u008a\u0096\u009a\u00a3\u00aa\u00ad\u00b1\u00b8\u00c0\u00c8"+
		"\u00cc\u00d2\u00db\u00e2\u00ea\u00f0\u00f3\u00f9\u0103\u010a\u010f\u0114"+
		"\u0118";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}