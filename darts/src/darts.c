#include "darts.h"
#include <math.h>

int score(coordinate_t c)
{
	float radius = sqrt(pow(c.x, 2.0) + pow(c.y, 2.0));
	if (radius <= 1.00) return 10;
	if (radius <= 5.00) return 5;
	if (radius <= 10.0) return 1;
	return 0;
}
