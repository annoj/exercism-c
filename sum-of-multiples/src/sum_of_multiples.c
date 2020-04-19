#include "sum_of_multiples.h"

unsigned int sum_of_multiples(const unsigned int *multiples,
                              const size_t number_of_multiples,
                              const unsigned int up_to)
{
	if (!multiples || !number_of_multiples)
		return 0;

	for (unsigned int i = 0; i < number_of_multiples; i++)
		if (!multiples[i])
			return 0;

	unsigned int acc = 0;
	for (unsigned int i = 0; i < up_to; i++) {
		for (unsigned int j = 0; j < number_of_multiples; j++) {
			if (i % multiples[j] == 0) {
				acc += i;
				break;
			}
		}
	}
	return acc;
}
