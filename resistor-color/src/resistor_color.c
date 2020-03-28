#include "resistor_color.h"
#include <stdlib.h>

int color_code(int color)
{
	return color;
}

int* colors()
{
	int* colors = malloc(sizeof(int[10]));
	for (int i = 0; i < 10; i++) colors[i] = i;
	return colors;
}
