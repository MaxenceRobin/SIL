// Generated from .\SIL.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.tree.ParseTreeVisitor;

/**
 * This interface defines a complete generic visitor for a parse tree produced
 * by {@link SILParser}.
 *
 * @param <T> The return type of the visit operation. Use {@link Void} for
 * operations with no return type.
 */
public interface SILVisitor<T> extends ParseTreeVisitor<T> {
	/**
	 * Visit a parse tree produced by {@link SILParser#file}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitFile(SILParser.FileContext ctx);
	/**
	 * Visit a parse tree produced by {@link SILParser#statement_list}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStatement_list(SILParser.Statement_listContext ctx);
	/**
	 * Visit a parse tree produced by {@link SILParser#statement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStatement(SILParser.StatementContext ctx);
	/**
	 * Visit a parse tree produced by {@link SILParser#function_declaration}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitFunction_declaration(SILParser.Function_declarationContext ctx);
	/**
	 * Visit a parse tree produced by {@link SILParser#function_call}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitFunction_call(SILParser.Function_callContext ctx);
	/**
	 * Visit a parse tree produced by {@link SILParser#parameter_list}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitParameter_list(SILParser.Parameter_listContext ctx);
	/**
	 * Visit a parse tree produced by {@link SILParser#argument_list}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitArgument_list(SILParser.Argument_listContext ctx);
	/**
	 * Visit a parse tree produced by {@link SILParser#variable_declaration}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitVariable_declaration(SILParser.Variable_declarationContext ctx);
	/**
	 * Visit a parse tree produced by {@link SILParser#variable_creation}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitVariable_creation(SILParser.Variable_creationContext ctx);
	/**
	 * Visit a parse tree produced by {@link SILParser#variable_affectation}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitVariable_affectation(SILParser.Variable_affectationContext ctx);
	/**
	 * Visit a parse tree produced by {@link SILParser#instruction}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitInstruction(SILParser.InstructionContext ctx);
	/**
	 * Visit a parse tree produced by {@link SILParser#block}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitBlock(SILParser.BlockContext ctx);
	/**
	 * Visit a parse tree produced by {@link SILParser#instruction_list}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitInstruction_list(SILParser.Instruction_listContext ctx);
	/**
	 * Visit a parse tree produced by {@link SILParser#action}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitAction(SILParser.ActionContext ctx);
	/**
	 * Visit a parse tree produced by {@link SILParser#expression_list}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitExpression_list(SILParser.Expression_listContext ctx);
	/**
	 * Visit a parse tree produced by {@link SILParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitExpression(SILParser.ExpressionContext ctx);
	/**
	 * Visit a parse tree produced by {@link SILParser#numeric_expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumeric_expression(SILParser.Numeric_expressionContext ctx);
	/**
	 * Visit a parse tree produced by {@link SILParser#numeric_mul_div}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumeric_mul_div(SILParser.Numeric_mul_divContext ctx);
	/**
	 * Visit a parse tree produced by {@link SILParser#numeric_pow}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumeric_pow(SILParser.Numeric_powContext ctx);
	/**
	 * Visit a parse tree produced by {@link SILParser#numeric_inversion}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumeric_inversion(SILParser.Numeric_inversionContext ctx);
	/**
	 * Visit a parse tree produced by {@link SILParser#numeric_cast}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumeric_cast(SILParser.Numeric_castContext ctx);
	/**
	 * Visit a parse tree produced by {@link SILParser#numeric_atom}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumeric_atom(SILParser.Numeric_atomContext ctx);
	/**
	 * Visit a parse tree produced by {@link SILParser#boolean_expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitBoolean_expression(SILParser.Boolean_expressionContext ctx);
	/**
	 * Visit a parse tree produced by {@link SILParser#boolean_and}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitBoolean_and(SILParser.Boolean_andContext ctx);
	/**
	 * Visit a parse tree produced by {@link SILParser#boolean_comparator}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitBoolean_comparator(SILParser.Boolean_comparatorContext ctx);
	/**
	 * Visit a parse tree produced by {@link SILParser#boolean_not}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitBoolean_not(SILParser.Boolean_notContext ctx);
	/**
	 * Visit a parse tree produced by {@link SILParser#boolean_cast}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitBoolean_cast(SILParser.Boolean_castContext ctx);
	/**
	 * Visit a parse tree produced by {@link SILParser#boolean_atom}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitBoolean_atom(SILParser.Boolean_atomContext ctx);
	/**
	 * Visit a parse tree produced by {@link SILParser#string_expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitString_expression(SILParser.String_expressionContext ctx);
	/**
	 * Visit a parse tree produced by {@link SILParser#string_cast}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitString_cast(SILParser.String_castContext ctx);
	/**
	 * Visit a parse tree produced by {@link SILParser#string_atom}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitString_atom(SILParser.String_atomContext ctx);
	/**
	 * Visit a parse tree produced by {@link SILParser#cast}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitCast(SILParser.CastContext ctx);
}