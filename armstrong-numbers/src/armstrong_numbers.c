#include "armstrong_numbers.h"
#include <math.h>
#include <stdbool.h>

int is_armstrong_number(int candidate)
{
	// Handle Error cases of log10(),
	// negative numbers are never armstrong numbers.
	if (candidate == 0) return true;
	if (candidate < 0) return false;

	int p = log10(candidate) + 1;
	int acc = 0;
	for (int n = candidate; n > 0; n /= 10)
			acc += pow(n % 10, p);

	return candidate == acc;
}
