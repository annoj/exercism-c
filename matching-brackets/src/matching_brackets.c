#include "matching_brackets.h"

bool is_paired(const char *input)
{
	char stack[0xff] = {0};
	int sp = 0;
	
	for (const char *c = input; *c; c++) {
		switch (*c) {
		case '(':
		case '[':
		case '{':
			stack[sp++] = *c;
			break;
		case ')':
			if (stack[--sp] != '(')
				return false;
			break;
		case ']':
			if (stack[--sp] != '[')
				return false;
			break;
		case '}':
			if (stack[--sp] != '{')
				return false;
			break;
		}
	}
	return sp == 0;
}
