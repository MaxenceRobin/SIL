grammar SIL;

// Lexer ------------------------------------------------------------------------------------------

// Keywords -------------------------------------
FUNCTION    : 'function';
VAR         : 'var';
CONST       : 'const';
RETURN      : 'return';
WHILE       : 'while';
OUT         : 'out';
IN          : 'in';
IF          : 'if';
ELIF        : 'elif';
ELSE        : 'else';
TRUE        : 'true';
FALSE       : 'false';
PAUSE       : 'pause';
RANDOM      : 'random';
NEWLINE     : 'newline';

fragment INTEGER    : 'integer';
fragment NUMBER     : 'number';
fragment STRING     : 'string';
fragment BOOLEAN    : 'boolean';
fragment VOID       : 'void';
TYPE                : (INTEGER | NUMBER | STRING | BOOLEAN | VOID | FUNCTION);

// Symbols --------------------------------------
L_PAR       : '(';
R_PAR       : ')';
L_BRACKET   : '{';
R_BRACKET   : '}';
PLUS        : '+';
MINUS       : '-';
STAR        : '*';
SLASH       : '/';
PERCENT     : '%';
POWER       : '^';
SEP         : ':';
S_QUOTE     : '\'';
D_QUOTE     : '"';
AFF         : '=';
EQU         : '==';
DIF         : '!=';
LT          : '<';
GT          : '>';
LEQ         : '<=';
GEQ         : '>=';
INC         : '++';
DEC         : '--';
POW_AFF     : '^=';
PLS_AFF     : '+=';
SUB_AFF     : '-=';
TME_AFF     : '*=';
DIV_AFF     : '/=';
MOD_AFF     : '%=';
DOT         : '.';
COMMA       : ',';
SEMICOLON   : ';';
UNDERSCORE  : '_';
OR          : 'or';
AND         : 'and';
NOT         : 'not';
DOLLAR      : '$';

// Values ---------------------------------------
fragment DIGIT          : '0'..'9';
fragment NON_NULL_DIGIT : '1'..'9';
fragment LOWER_LETTER   : 'a'..'z';
fragment UPPER_LETTER   : 'A'..'Z';
fragment LETTER         : (LOWER_LETTER | UPPER_LETTER);
INTEGER_PART   : (NON_NULL_DIGIT DIGIT* | '0');
DECIMAL_PART   : DOT DIGIT+ ([eE] [+-]? DIGIT+)?;
Id                      : LETTER (LETTER | DIGIT | UNDERSCORE)*;
String                  : S_QUOTE .*? S_QUOTE
                        | D_QUOTE .*? D_QUOTE;

// Specials -------------------------------------
Newline     : ('\r'? '\n' | '\r')+;
Whitespace  : (' ' | '\t')+ -> skip;
Single_comment  : '//' ~('\n' | '\r')* -> skip;
Multi_comment   : '/*' .*? '*/' -> skip;

// Parser -----------------------------------------------------------------------------------------

// General file description ---------------------
file                : Newline? instruction_list EOF;
instruction_list    : (instructions+=instruction Newline)* instructions+=instruction?;

// List of possible instructions ----------------
instruction : block
            | action;

block   : L_BRACKET Newline? instruction_list R_BRACKET;

action  : OUT expression_list
        | PAUSE
        | if_elif_else
        | while_loop
        | variable_creation
        | expression
        ;

expression_list : (expressions+=expression (COMMA expressions+=expression)*)?;

        
if_elif_else  : IF if_condition=expression Newline? if_instruction=instruction Newline?
                (ELIF elif_condition+=expression Newline? elif_instruction+=instruction Newline?)*
                (ELSE Newline? else_instruction=instruction)?
                ;

while_loop  : WHILE expression Newline? instruction;

// Expressions ----------------------------------
// Operators precedence tree
expression  : atom                                      #atomic_value
            | L_PAR expression R_PAR                    #parenthesis_expression
            | expression INC                            #post_incrementation
            | expression DEC                            #post_decrementation
            | expression L_PAR expression_list R_PAR    #function_call
            
            | INC expression        #pre_incrementation
            | DEC expression        #pre_decrementation
            | MINUS expression      #unary_minus
            | NOT expression        #not
            | expression SEP TYPE   #cast
            
            | <assoc=right> left=expression POWER right=expression      #power
            | left=expression op=(STAR|SLASH|PERCENT) right=expression  #multiplication_division_modulo
            | left=expression op=(PLUS|MINUS) right=expression          #addition_substraction
            
            | left=expression op=(LT|LEQ|GT|GEQ) right=expression   #comparison
            | left=expression op=(EQU|DIF) right=expression         #equality_difference

            | left=expression AND right=expression  #and
            | left=expression OR right=expression   #or

            | <assoc=right> Id AFF expression   #variable_affectation
            | Id POW_AFF expression             #variable_power
            | Id TME_AFF expression             #variable_multiplication
            | Id DIV_AFF expression             #variable_division
            | Id MOD_AFF expression             #variable_modulo
            | Id PLS_AFF expression             #variable_addition
            | Id SUB_AFF expression             #variable_substraction
            ;

atom    : value_expression
        | special_value_expression;

value_expression    : number
                    | String
                    | Id
                    | function_declaration
                    | TRUE
                    | FALSE
                    ;

number  : INTEGER_PART (DECIMAL_PART)?;

special_value_expression    : IN
                            | RANDOM
                            | NEWLINE
                            ;

                    
// Functions ------------------------------------
function_declaration    : FUNCTION Id L_PAR parameter_list R_PAR Newline? block;
parameter_list          : (variable_creation (COMMA variable_creation)*)?;

// Variables ------------------------------------
variable_creation       : (VAR|CONST) (SEP TYPE)? Id (AFF expression)?;