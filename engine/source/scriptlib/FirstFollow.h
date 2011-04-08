/*
 * OpenBOR - http://www.LavaLit.com
 * -----------------------------------------------------------------------
 * All rights reserved, see LICENSE in OpenBOR root for details.
 *
 * Copyright (c) 2004 - 2011 OpenBOR Team
 */

#ifndef FIRSTFOLLOW_H
#define FIRSTFOLLOW_H

#include "Lexer.h"
static MY_TOKEN_TYPE first[] = {
	EPSILON, TOKEN_CONST, TOKEN_SIGNED, TOKEN_UNSIGNED, TOKEN_VOID, TOKEN_CHAR, TOKEN_SHORT, TOKEN_INT, TOKEN_LONG, TOKEN_FLOAT, TOKEN_DOUBLE, END_OF_TOKENS,
	TOKEN_CONST, TOKEN_SIGNED, TOKEN_UNSIGNED, TOKEN_VOID, TOKEN_CHAR, TOKEN_SHORT, TOKEN_INT, TOKEN_LONG, TOKEN_FLOAT, TOKEN_DOUBLE, END_OF_TOKENS,
	TOKEN_CONST, TOKEN_SIGNED, TOKEN_UNSIGNED, TOKEN_VOID, TOKEN_CHAR, TOKEN_SHORT, TOKEN_INT, TOKEN_LONG, TOKEN_FLOAT, TOKEN_DOUBLE, END_OF_TOKENS,
	TOKEN_CONST, TOKEN_SIGNED, TOKEN_UNSIGNED, TOKEN_VOID, TOKEN_CHAR, TOKEN_SHORT, TOKEN_INT, TOKEN_LONG, TOKEN_FLOAT, TOKEN_DOUBLE, END_OF_TOKENS,
	TOKEN_LPAREN, EPSILON, END_OF_TOKENS,
	TOKEN_RPAREN, TOKEN_CONST, TOKEN_SIGNED, TOKEN_UNSIGNED, TOKEN_VOID, TOKEN_CHAR, TOKEN_SHORT, TOKEN_INT, TOKEN_LONG, TOKEN_FLOAT, TOKEN_DOUBLE, END_OF_TOKENS,
	TOKEN_ASSIGN, EPSILON, END_OF_TOKENS,
	TOKEN_CONST, TOKEN_SIGNED, TOKEN_UNSIGNED, TOKEN_VOID, TOKEN_CHAR, TOKEN_SHORT, TOKEN_INT, TOKEN_LONG, TOKEN_FLOAT, TOKEN_DOUBLE, END_OF_TOKENS,
	TOKEN_CONST, TOKEN_SIGNED, TOKEN_UNSIGNED, TOKEN_VOID, TOKEN_CHAR, TOKEN_SHORT, TOKEN_INT, TOKEN_LONG, TOKEN_FLOAT, TOKEN_DOUBLE, END_OF_TOKENS,
	TOKEN_COMMA, EPSILON, END_OF_TOKENS,
	TOKEN_CONST, TOKEN_SIGNED, TOKEN_UNSIGNED, TOKEN_VOID, TOKEN_CHAR, TOKEN_SHORT, TOKEN_INT, TOKEN_LONG, TOKEN_FLOAT, TOKEN_DOUBLE, END_OF_TOKENS,
	TOKEN_CONST, TOKEN_SIGNED, TOKEN_UNSIGNED, TOKEN_VOID, TOKEN_CHAR, TOKEN_SHORT, TOKEN_INT, TOKEN_LONG, TOKEN_FLOAT, TOKEN_DOUBLE, EPSILON, END_OF_TOKENS,
	TOKEN_LCURLY, TOKEN_IF, TOKEN_WHILE, TOKEN_DO, TOKEN_FOR, TOKEN_BREAK, TOKEN_RETURN, TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
	EPSILON, TOKEN_LCURLY, TOKEN_IF, TOKEN_WHILE, TOKEN_DO, TOKEN_FOR, TOKEN_BREAK, TOKEN_RETURN, TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
	TOKEN_LCURLY, TOKEN_IF, TOKEN_WHILE, TOKEN_DO, TOKEN_FOR, TOKEN_BREAK, TOKEN_RETURN, TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
	TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
	TOKEN_LCURLY, END_OF_TOKENS,
	TOKEN_CONST, TOKEN_SIGNED, TOKEN_UNSIGNED, TOKEN_VOID, TOKEN_CHAR, TOKEN_SHORT, TOKEN_INT, TOKEN_LONG, TOKEN_FLOAT, TOKEN_DOUBLE, EPSILON, END_OF_TOKENS,
	EPSILON, TOKEN_LCURLY, TOKEN_IF, TOKEN_WHILE, TOKEN_DO, TOKEN_FOR, TOKEN_BREAK, TOKEN_RETURN, TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
	TOKEN_IF, END_OF_TOKENS,
	TOKEN_ELSE, EPSILON, END_OF_TOKENS,
	TOKEN_WHILE, TOKEN_DO, TOKEN_FOR, END_OF_TOKENS,
	EPSILON, TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
	EPSILON, TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
	TOKEN_BREAK, TOKEN_RETURN, END_OF_TOKENS,
	EPSILON, TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
	TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
	TOKEN_ASSIGN, TOKEN_MUL_ASSIGN, TOKEN_DIV_ASSIGN, TOKEN_MOD_ASSIGN, TOKEN_ADD_ASSIGN, TOKEN_SUB_ASSIGN, END_OF_TOKENS,
	TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
	TOKEN_ASSIGN, TOKEN_MUL_ASSIGN, TOKEN_DIV_ASSIGN, TOKEN_MOD_ASSIGN, TOKEN_ADD_ASSIGN, TOKEN_SUB_ASSIGN, EPSILON, END_OF_TOKENS,
	TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
	TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
	TOKEN_OR_OP, EPSILON, END_OF_TOKENS,
	TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
	TOKEN_AND_OP, EPSILON, END_OF_TOKENS,
	TOKEN_EQ_OP, TOKEN_NE_OP, END_OF_TOKENS,
	TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
	TOKEN_EQ_OP, TOKEN_NE_OP, EPSILON, END_OF_TOKENS,
	TOKEN_GE_OP, TOKEN_LE_OP, TOKEN_LT, TOKEN_GT, END_OF_TOKENS,
	TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
	TOKEN_GE_OP, TOKEN_LE_OP, TOKEN_LT, TOKEN_GT, EPSILON, END_OF_TOKENS,
	TOKEN_ADD, TOKEN_SUB, END_OF_TOKENS,
	TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
	TOKEN_ADD, TOKEN_SUB, EPSILON, END_OF_TOKENS,
	TOKEN_MUL, TOKEN_DIV, TOKEN_MOD, END_OF_TOKENS,
	TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
	TOKEN_MUL, TOKEN_DIV, TOKEN_MOD, EPSILON, END_OF_TOKENS,
	TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
	TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
	TOKEN_LPAREN, TOKEN_FIELD, TOKEN_INC_OP, TOKEN_DEC_OP, EPSILON, END_OF_TOKENS,
	EPSILON, TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
	TOKEN_COMMA, EPSILON, END_OF_TOKENS,
	TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
	TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, END_OF_TOKENS
};




static MY_TOKEN_TYPE follow[] = {
	TOKEN_EOF, END_OF_TOKENS,
	EPSILON, TOKEN_CONST, TOKEN_SIGNED, TOKEN_UNSIGNED, TOKEN_VOID, TOKEN_CHAR, TOKEN_SHORT, TOKEN_INT, TOKEN_LONG, TOKEN_FLOAT, TOKEN_DOUBLE, TOKEN_EOF, END_OF_TOKENS,
	TOKEN_IDENTIFIER, TOKEN_COMMA, EPSILON, TOKEN_RPAREN, END_OF_TOKENS,
	TOKEN_CONST, TOKEN_SIGNED, TOKEN_UNSIGNED, TOKEN_VOID, TOKEN_CHAR, TOKEN_SHORT, TOKEN_INT, TOKEN_LONG, TOKEN_FLOAT, TOKEN_DOUBLE, EPSILON, TOKEN_LCURLY, TOKEN_IF, TOKEN_WHILE, TOKEN_DO, TOKEN_FOR, TOKEN_BREAK, TOKEN_RETURN, TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, TOKEN_RCURLY, END_OF_TOKENS,
	TOKEN_LCURLY, END_OF_TOKENS,
	TOKEN_LCURLY, END_OF_TOKENS,
	TOKEN_SEMICOLON, END_OF_TOKENS,
	TOKEN_COMMA, EPSILON, TOKEN_RPAREN, END_OF_TOKENS,
	TOKEN_RPAREN, END_OF_TOKENS,
	TOKEN_RPAREN, END_OF_TOKENS,
	EPSILON, TOKEN_LCURLY, TOKEN_IF, TOKEN_WHILE, TOKEN_DO, TOKEN_FOR, TOKEN_BREAK, TOKEN_RETURN, TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, TOKEN_RCURLY, END_OF_TOKENS,
	EPSILON, TOKEN_LCURLY, TOKEN_IF, TOKEN_WHILE, TOKEN_DO, TOKEN_FOR, TOKEN_BREAK, TOKEN_RETURN, TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, TOKEN_RCURLY, END_OF_TOKENS,
	TOKEN_RCURLY, END_OF_TOKENS,
	TOKEN_RCURLY, END_OF_TOKENS,
	EPSILON, TOKEN_LCURLY, TOKEN_IF, TOKEN_WHILE, TOKEN_DO, TOKEN_FOR, TOKEN_BREAK, TOKEN_RETURN, TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, TOKEN_RCURLY, TOKEN_ELSE, END_OF_TOKENS,
	EPSILON, TOKEN_LCURLY, TOKEN_IF, TOKEN_WHILE, TOKEN_DO, TOKEN_FOR, TOKEN_BREAK, TOKEN_RETURN, TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, TOKEN_RCURLY, TOKEN_ELSE, TOKEN_RPAREN, END_OF_TOKENS,
	EPSILON, TOKEN_LCURLY, TOKEN_IF, TOKEN_WHILE, TOKEN_DO, TOKEN_FOR, TOKEN_BREAK, TOKEN_RETURN, TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, TOKEN_RCURLY, TOKEN_ELSE, TOKEN_CONST, TOKEN_SIGNED, TOKEN_UNSIGNED, TOKEN_VOID, TOKEN_CHAR, TOKEN_SHORT, TOKEN_INT, TOKEN_LONG, TOKEN_FLOAT, TOKEN_DOUBLE, TOKEN_EOF, END_OF_TOKENS,
	EPSILON, TOKEN_LCURLY, TOKEN_IF, TOKEN_WHILE, TOKEN_DO, TOKEN_FOR, TOKEN_BREAK, TOKEN_RETURN, TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, TOKEN_RCURLY, END_OF_TOKENS,
	TOKEN_RCURLY, END_OF_TOKENS,
	EPSILON, TOKEN_LCURLY, TOKEN_IF, TOKEN_WHILE, TOKEN_DO, TOKEN_FOR, TOKEN_BREAK, TOKEN_RETURN, TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, TOKEN_RCURLY, TOKEN_ELSE, END_OF_TOKENS,
	EPSILON, TOKEN_LCURLY, TOKEN_IF, TOKEN_WHILE, TOKEN_DO, TOKEN_FOR, TOKEN_BREAK, TOKEN_RETURN, TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, TOKEN_RCURLY, TOKEN_ELSE, END_OF_TOKENS,
	EPSILON, TOKEN_LCURLY, TOKEN_IF, TOKEN_WHILE, TOKEN_DO, TOKEN_FOR, TOKEN_BREAK, TOKEN_RETURN, TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, TOKEN_RCURLY, TOKEN_ELSE, END_OF_TOKENS,
	EPSILON, TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, TOKEN_RPAREN, END_OF_TOKENS,
	TOKEN_RPAREN, END_OF_TOKENS,
	EPSILON, TOKEN_LCURLY, TOKEN_IF, TOKEN_WHILE, TOKEN_DO, TOKEN_FOR, TOKEN_BREAK, TOKEN_RETURN, TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, TOKEN_RCURLY, TOKEN_ELSE, END_OF_TOKENS,
	TOKEN_SEMICOLON, END_OF_TOKENS,
	TOKEN_SEMICOLON, TOKEN_RPAREN, END_OF_TOKENS,
	TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
	TOKEN_SEMICOLON, TOKEN_RPAREN, TOKEN_COMMA, EPSILON, END_OF_TOKENS,
	TOKEN_SEMICOLON, TOKEN_RPAREN, TOKEN_COMMA, EPSILON, END_OF_TOKENS,
	END_OF_TOKENS, END_OF_TOKENS,
	TOKEN_ASSIGN, TOKEN_MUL_ASSIGN, TOKEN_DIV_ASSIGN, TOKEN_MOD_ASSIGN, TOKEN_ADD_ASSIGN, TOKEN_SUB_ASSIGN, EPSILON, TOKEN_SEMICOLON, TOKEN_RPAREN, TOKEN_COMMA, END_OF_TOKENS,
	TOKEN_ASSIGN, TOKEN_MUL_ASSIGN, TOKEN_DIV_ASSIGN, TOKEN_MOD_ASSIGN, TOKEN_ADD_ASSIGN, TOKEN_SUB_ASSIGN, EPSILON, TOKEN_SEMICOLON, TOKEN_RPAREN, TOKEN_COMMA, END_OF_TOKENS,
	TOKEN_OR_OP, EPSILON, TOKEN_SEMICOLON, TOKEN_RPAREN, TOKEN_COMMA, TOKEN_ASSIGN, TOKEN_MUL_ASSIGN, TOKEN_DIV_ASSIGN, TOKEN_MOD_ASSIGN, TOKEN_ADD_ASSIGN, TOKEN_SUB_ASSIGN, END_OF_TOKENS,
	TOKEN_OR_OP, EPSILON, TOKEN_SEMICOLON, TOKEN_RPAREN, TOKEN_COMMA, TOKEN_ASSIGN, TOKEN_MUL_ASSIGN, TOKEN_DIV_ASSIGN, TOKEN_MOD_ASSIGN, TOKEN_ADD_ASSIGN, TOKEN_SUB_ASSIGN, END_OF_TOKENS,
	TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
	TOKEN_AND_OP, EPSILON, TOKEN_SEMICOLON, TOKEN_RPAREN, TOKEN_COMMA, TOKEN_ASSIGN, TOKEN_MUL_ASSIGN, TOKEN_DIV_ASSIGN, TOKEN_MOD_ASSIGN, TOKEN_ADD_ASSIGN, TOKEN_SUB_ASSIGN, TOKEN_OR_OP, END_OF_TOKENS,
	TOKEN_AND_OP, EPSILON, TOKEN_SEMICOLON, TOKEN_RPAREN, TOKEN_COMMA, TOKEN_ASSIGN, TOKEN_MUL_ASSIGN, TOKEN_DIV_ASSIGN, TOKEN_MOD_ASSIGN, TOKEN_ADD_ASSIGN, TOKEN_SUB_ASSIGN, TOKEN_OR_OP, END_OF_TOKENS,
	TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
	TOKEN_EQ_OP, TOKEN_NE_OP, EPSILON, TOKEN_SEMICOLON, TOKEN_RPAREN, TOKEN_COMMA, TOKEN_ASSIGN, TOKEN_MUL_ASSIGN, TOKEN_DIV_ASSIGN, TOKEN_MOD_ASSIGN, TOKEN_ADD_ASSIGN, TOKEN_SUB_ASSIGN, TOKEN_OR_OP, TOKEN_AND_OP, END_OF_TOKENS,
	TOKEN_EQ_OP, TOKEN_NE_OP, EPSILON, TOKEN_SEMICOLON, TOKEN_RPAREN, TOKEN_COMMA, TOKEN_ASSIGN, TOKEN_MUL_ASSIGN, TOKEN_DIV_ASSIGN, TOKEN_MOD_ASSIGN, TOKEN_ADD_ASSIGN, TOKEN_SUB_ASSIGN, TOKEN_OR_OP, TOKEN_AND_OP, END_OF_TOKENS,
	TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
	TOKEN_GE_OP, TOKEN_LE_OP, TOKEN_LT, TOKEN_GT, EPSILON, TOKEN_SEMICOLON, TOKEN_RPAREN, TOKEN_COMMA, TOKEN_ASSIGN, TOKEN_MUL_ASSIGN, TOKEN_DIV_ASSIGN, TOKEN_MOD_ASSIGN, TOKEN_ADD_ASSIGN, TOKEN_SUB_ASSIGN, TOKEN_OR_OP, TOKEN_AND_OP, TOKEN_EQ_OP, TOKEN_NE_OP, END_OF_TOKENS,
	TOKEN_GE_OP, TOKEN_LE_OP, TOKEN_LT, TOKEN_GT, EPSILON, TOKEN_SEMICOLON, TOKEN_RPAREN, TOKEN_COMMA, TOKEN_ASSIGN, TOKEN_MUL_ASSIGN, TOKEN_MOD_ASSIGN, TOKEN_DIV_ASSIGN, TOKEN_ADD_ASSIGN, TOKEN_SUB_ASSIGN, TOKEN_OR_OP, TOKEN_AND_OP, TOKEN_EQ_OP, TOKEN_NE_OP, END_OF_TOKENS,
	TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
	TOKEN_ADD, TOKEN_SUB, EPSILON, TOKEN_SEMICOLON, TOKEN_RPAREN, TOKEN_COMMA, TOKEN_ASSIGN, TOKEN_MUL_ASSIGN, TOKEN_DIV_ASSIGN, TOKEN_MOD_ASSIGN, TOKEN_ADD_ASSIGN, TOKEN_SUB_ASSIGN, TOKEN_OR_OP, TOKEN_AND_OP, TOKEN_EQ_OP, TOKEN_NE_OP, TOKEN_GE_OP, TOKEN_LE_OP, TOKEN_LT, TOKEN_GT, END_OF_TOKENS,
	TOKEN_ADD, TOKEN_SUB, EPSILON, TOKEN_SEMICOLON, TOKEN_RPAREN, TOKEN_COMMA, TOKEN_ASSIGN, TOKEN_MUL_ASSIGN, TOKEN_DIV_ASSIGN, TOKEN_MOD_ASSIGN, TOKEN_ADD_ASSIGN, TOKEN_SUB_ASSIGN, TOKEN_OR_OP, TOKEN_AND_OP, TOKEN_EQ_OP, TOKEN_NE_OP, TOKEN_GE_OP, TOKEN_LE_OP, TOKEN_LT, TOKEN_GT, END_OF_TOKENS,
	TOKEN_MUL, TOKEN_DIV, TOKEN_MOD, EPSILON, TOKEN_SEMICOLON, TOKEN_RPAREN, TOKEN_COMMA, TOKEN_ASSIGN, TOKEN_MUL_ASSIGN, TOKEN_DIV_ASSIGN, TOKEN_MOD_ASSIGN, TOKEN_ADD_ASSIGN, TOKEN_SUB_ASSIGN, TOKEN_OR_OP, TOKEN_AND_OP, TOKEN_EQ_OP, TOKEN_NE_OP, TOKEN_GE_OP, TOKEN_LE_OP, TOKEN_LT, TOKEN_GT, TOKEN_ADD, TOKEN_SUB, END_OF_TOKENS,
	TOKEN_MUL, TOKEN_DIV, TOKEN_MOD, EPSILON, TOKEN_SEMICOLON, TOKEN_RPAREN, TOKEN_COMMA, TOKEN_ASSIGN, TOKEN_MUL_ASSIGN, TOKEN_DIV_ASSIGN, TOKEN_MOD_ASSIGN, TOKEN_ADD_ASSIGN, TOKEN_SUB_ASSIGN, TOKEN_OR_OP, TOKEN_AND_OP, TOKEN_EQ_OP, TOKEN_NE_OP, TOKEN_GE_OP, TOKEN_LE_OP, TOKEN_LT, TOKEN_GT, TOKEN_ADD, TOKEN_SUB, END_OF_TOKENS,
	TOKEN_MUL, TOKEN_DIV, TOKEN_MOD, EPSILON, TOKEN_SEMICOLON, TOKEN_RPAREN, TOKEN_COMMA, TOKEN_ASSIGN, TOKEN_MUL_ASSIGN, TOKEN_DIV_ASSIGN, TOKEN_MOD_ASSIGN, TOKEN_ADD_ASSIGN, TOKEN_SUB_ASSIGN, TOKEN_OR_OP, TOKEN_AND_OP, TOKEN_EQ_OP, TOKEN_NE_OP, TOKEN_GE_OP, TOKEN_LE_OP, TOKEN_LT, TOKEN_GT, TOKEN_ADD, TOKEN_SUB, END_OF_TOKENS,
	TOKEN_RPAREN, END_OF_TOKENS,
	TOKEN_RPAREN, END_OF_TOKENS,
	TOKEN_LPAREN, TOKEN_FIELD, TOKEN_INC_OP, TOKEN_DEC_OP, EPSILON, TOKEN_SEMICOLON, TOKEN_RPAREN, TOKEN_COMMA, TOKEN_ASSIGN, TOKEN_MUL_ASSIGN, TOKEN_DIV_ASSIGN, TOKEN_MOD_ASSIGN, TOKEN_ADD_ASSIGN, TOKEN_SUB_ASSIGN, TOKEN_OR_OP, TOKEN_AND_OP, TOKEN_EQ_OP, TOKEN_NE_OP, TOKEN_GE_OP, TOKEN_LE_OP, TOKEN_LT, TOKEN_GT, TOKEN_ADD, TOKEN_SUB, TOKEN_MUL, TOKEN_DIV, TOKEN_MOD, END_OF_TOKENS,
	TOKEN_LPAREN, TOKEN_FIELD, TOKEN_INC_OP, TOKEN_DEC_OP, EPSILON, TOKEN_SEMICOLON, TOKEN_RPAREN, TOKEN_COMMA, TOKEN_ASSIGN, TOKEN_MUL_ASSIGN, TOKEN_DIV_ASSIGN, TOKEN_MOD_ASSIGN, TOKEN_ADD_ASSIGN, TOKEN_SUB_ASSIGN, TOKEN_OR_OP, TOKEN_AND_OP, TOKEN_EQ_OP, TOKEN_NE_OP, TOKEN_GE_OP, TOKEN_LE_OP, TOKEN_LT, TOKEN_GT, TOKEN_ADD, TOKEN_SUB, TOKEN_MUL, TOKEN_DIV, TOKEN_MOD, END_OF_TOKENS
};
#endif
