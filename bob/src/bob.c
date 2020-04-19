#include "bob.h"
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

char *hey_bob(char *greeting)
{
	static char *answers[] = {
		"Sure.",
		"Whoa, chill out!",
		"Calm down, I know what I'm doing!",
		"Fine. Be that way!",
		"Whatever."
	};

	bool has_uppercase = false;
	bool has_lowercase = false;
	bool has_alnum = false;
	for (const char *c = greeting; *c; c++) {
		if (isupper(*c))
			has_uppercase = true;
		if (islower(*c))
			has_lowercase = true;
		if (isalnum(*c))
			has_alnum = true;
	}

	bool is_question;
	int i = strlen(greeting);
	while (i >= 0 && isspace(greeting[--i]))
		;
	is_question = greeting[i] == '?';

	int idx;
	if (!has_alnum)
		idx = is_question ? SURE : FINE;
	else if (!has_uppercase && !has_lowercase && has_alnum)
		idx = is_question ? SURE : WHATEVER;
	else if (has_lowercase)
		idx = is_question ? SURE : WHATEVER;
	else if (!has_lowercase && has_uppercase)
		idx = is_question ? CALM : WHOA;

	return answers[idx];
}
