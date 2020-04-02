#include "isogram.h"
#include <stdint.h>
#include <stdbool.h>
#include <ctype.h>

bool is_isogram(const char phrase[])
{
	if (!phrase)
			return false;

	uint32_t letters = 0x0;
	for (const char *p = phrase; *p; p++) {
		if (*p == ' ' || *p == '-')
				continue;
		if (letters & (0x1 << (tolower(*p) - 'a')))
				return false;
		letters ^= (0x1 << (tolower(*p) - 'a'));
	}
	return true;
}
