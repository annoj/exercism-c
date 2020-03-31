#include "resistor_color_trio.h"
#include <stdlib.h>
#include <math.h>

resistor_value_t color_code(resistor_band_t bands[])
{
	resistor_value_t *ret = malloc(sizeof(resistor_value_t));
	
	ret->value = (bands[0] * 10 + bands[1]) * pow(10, bands[2]);
	if (!(ret->value % 1000)) {
		ret->value /= 1000;
		ret->unit = KILOOHMS;
	} else {
		ret->unit = OHMS;
	}

	return *ret;
}
