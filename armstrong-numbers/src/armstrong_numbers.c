#include "armstrong_numbers.h"
#include <math.h>

int is_armstrong_number(int candidate)
{
	int p = log10(candidate) + 1;
	int acc = 0;
	for (int n = candidate; n > 0; n /= 10)
			acc += pow(n % 10, p);

	return candidate == acc;
}
