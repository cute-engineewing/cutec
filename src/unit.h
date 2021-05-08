#ifndef _CUTEC_UNIT_H
#define _CUTEC_UNIT_H

#include <mulib/vec.h>

struct origin
{
};

struct unit
{
	const char *buffer;

	vec_t(struct origin) origines;
	vec_t(struct token) tokens;
};

void unit_init(struct unit *unit);

void unit_deinit(struct unit *unit);

#endif /* !_CUTEC_UNIT_H */
