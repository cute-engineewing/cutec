#ifndef _CUTEC_SCAN_H
#define _CUTEC_SCAN_H

#include <mulib/common.h>

struct scan
{
	const char *buffer;
	size_t size;
	size_t head;
};

char scan_peek(struct scan *scan, size_t offset);

char scan_current(struct scan *scan);

void scan_forward(struct scan *scan);

void scan_forward_n(struct scan *scan, size_t n);

bool scan_ended(struct scan *scan);

bool scan_continue(struct scan *scan);

bool scan_current_is_c(struct scan *scan, char c);

bool scan_current_is_w(struct scan *scan, const char *word);

bool scan_current_is_b(struct scan *scan, const char *buffer, size_t size);

bool scan_any_c(struct scan *scan, char c);

bool scan_any_w(struct scan *scan, const char *word);

bool scan_any_b(struct scan *scan, const char *buffer, size_t size);

bool scan_skip_c(struct scan *scan, char c);

bool scan_skip_w(struct scan *scan, const char *word);

bool scan_skip_b(struct scan *scan, const char *buffer, size_t size);

bool scan_eat_c(struct scan *scan, char c);

bool scan_eat_w(struct scan *scan, const char *word);

bool scan_eat_b(struct scan *scan, const char *buffer, size_t size);

#endif /* !_CUTEC_PARSER_H */
