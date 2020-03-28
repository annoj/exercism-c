#include "resistor_color.h"
#include <stdlib.h>

int color_code(int color)
{
	return color;
}

int* colors()
{
	int* colors = malloc(sizeof(int[NUM_COLORS]));
	for (int i = 0; i < NUM_COLORS; i++) colors[i] = i;
	return colors;
}
