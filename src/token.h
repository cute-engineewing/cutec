#ifndef _CUTEC_TOKEN_H
#define _CUTEC_TOKEN_H

#include "source.h"
#include "vec.h"

enum token_type
{
	TOKEN_AUTO,
	TOKEN_DOUBLE,
	TOKEN_INT,
	TOKEN_STRUCT,
	TOKEN_BREAK,
	TOKEN_ELSE,
	TOKEN_LONG,
	TOKEN_SWITCH,
	TOKEN_CASE,
	TOKEN_ENUM,
	TOKEN_REGISTER,
	TOKEN_TYPEDEF,
	TOKEN_CHAR,
	TOKEN_EXTERN,
	TOKEN_RETURN,
	TOKEN_UNION,
	TOKEN_CONST,
	TOKEN_FLOAT,
	TOKEN_SHORT,
	TOKEN_UNSIGNED,
	TOKEN_CONTINUE,
	TOKEN_FOR,
	TOKEN_SIGNED,
	TOKEN_VOID,
	TOKEN_DEFAULT,
	TOKEN_GOTO,
	TOKEN_SIZEOF,
	TOKEN_VOLATILE,
	TOKEN_DO,
	TOKEN_IF,
	TOKEN_STATIC,
	TOKEN_WHILE,
};

struct token
{
	enum token_type type;
	struct source_location location;

	const char *buffer;
	size_t length;
};

typedef vec_t(struct token) vec_token_t;

#endif /* !_CUTEC_TOKEN_H */
