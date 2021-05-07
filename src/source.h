#ifndef _CUTEC_SOURCE_H
#define _CUTEC_SOURCE_H

#include "common.h"

struct source
{
	const char *buffer;
	size_t size;
};

struct source_location
{
	int line;
	int column;
};

struct source *source_open();

void source_close(struct source *);

#endif /* !_CUTEC_TOKEN_H */
