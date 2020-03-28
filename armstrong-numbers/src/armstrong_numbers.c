#include "armstrong_numbers.h"

static int power(int base, int exp)
{
	if (exp == 0) return 1;
	else if (exp % 2) return base * power(base, exp - 1);
	else {
		int temp = power(base, exp / 2);
		return temp * temp;
	}
}

int is_armstrong_number(int candidate)
{
	int n = candidate;
	int p = 0;
	while (n > 0) {
		p++;
		n = n / 10;	
	}

	int acc = 0;
	n = candidate;
	while (n > 0) {
		acc += power(n % 10, p); 
		n = n / 10;
	}

	return candidate == acc;
}
