#ifndef _CUTEC_AST_H
#define _CUTEC_AST_H

#include "token.h"
#include <mulib/vec.h>

enum ast_node_type
{

};

struct ast_node
{
	enum ast_node_type type;
	struct token token;
};

#endif /* !_CUTEC_AST_H */
