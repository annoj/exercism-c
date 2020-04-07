#include "pangram.h"
#include <stdint.h>
#include <stdbool.h>
#include <ctype.h>

bool is_pangram(const char *sentence)
{
	if (!sentence)
		return false;

	uint32_t letters = 0x3ffffff;
	for (const char *c = sentence; *c; c++)
		letters &= ~(0x1 << ('z' - tolower(*c)));

	return letters == 0x0;
}
