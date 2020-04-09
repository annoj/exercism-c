#include "rna_transcription.h"
#include <stdlib.h>


char *to_rna(const char *dna)
{
	char *rna = malloc(0xff);
	int i = 0;
	
	for (const char *c = dna; *c; c++) {
		switch (*c) {
		case 'G':
			rna[i++] = 'C';
			break;
		case 'C':
			rna[i++] = 'G';
			break;
		case 'T':
			rna[i++] = 'A';
			break;
		case 'A':
			rna[i++] = 'U';
			break;
		default:
			free(rna);
			return NULL;
		}
	}
	rna[i] = '\0';
	return rna;
}
