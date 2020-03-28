#ifndef RESISTOR_COLOR_H
#define RESISTOR_COLOR_H

#define NUM_COLORS 10

#define BLACK	0
#define BROWN	1
#define RED		2
#define ORANGE	3
#define YELLOW	4
#define GREEN	5
#define BLUE	6
#define VIOLET	7
#define GREY	8
#define WHITE 	9

typedef int resistor_band_t;

int color_code(int color);
int* colors();

#endif
