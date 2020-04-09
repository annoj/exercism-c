#include "space_age.h"

float convert_planet_age(planet_t planet, int64_t input)
{
	switch (planet) {
	case MERCURY:	return (float) input / 7600543.81992f;
	case VENUS:		return (float) input / 19414149.052176f;
	case EARTH:		return (float) input / 31557600.0f;
	case MARS:		return (float) input / 59354032.690079994f;
	case JUPITER:	return (float) input / 374355659.124;
	case SATURN:	return (float) input / 929292362.8848f;
	case URANUS:	return (float) input / 2651370019.3296f;
	case NEPTUNE:	return (float) input / 5200418560.032001f;
	default:		return 0.0f;
	}
}
