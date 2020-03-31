#include "acronym.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
#include <stdio.h>

char *abbreviate(const char *phrase)
{
	char *buf = malloc(32);
	bool initial = true;
	int i = 0;

	if (!phrase)
			return NULL;
	if (!*phrase)
			return NULL;

	for (const char *p = phrase; *p; p++) {
		if (initial)
				buf[i++] = toupper(*p);
		initial = ((*p == ' ' || *p == '-' )
						&& 0x61 <= tolower(*(p + 1))
						&& tolower(*(p + 1)) <= 0x7b);
	}
	buf[i] = '\0';
	return buf;
}
