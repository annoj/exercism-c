#include "nucleotide_count.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *count(const char *dna_strand)
{
	int a = 0;
	int c = 0;
	int g = 0;
	int t = 0;
	char *ret = malloc(0xff);

	for (const char *n = dna_strand; *n; n++) {
		switch (*n) {
		case 'A': 
			a++;
			break;
		case 'C':
			c++;
			break;
		case 'G':
			g++;
			break;
		case 'T':
			t++;
			break;
		default:
			*ret = '\0';
			return ret;
		}
	}
	sprintf(ret, "A:%d C:%d G:%d T:%d", a, c, g, t);
	return ret;
}
