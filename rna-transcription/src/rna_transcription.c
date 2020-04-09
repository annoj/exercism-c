#include "rna_transcription.h"
#include <stdlib.h>
#include <string.h>


char *to_rna(const char *dna)
{
	int slen = strlen(dna);
	char *rna = malloc(slen + 1);
	
	for (int i = 0; i < slen; i++) {
		switch (dna[i]) {
		case 'G':
			rna[i] = 'C';
			break;
		case 'C':
			rna[i] = 'G';
			break;
		case 'T':
			rna[i] = 'A';
			break;
		case 'A':
			rna[i] = 'U';
			break;
		default:
			free(rna);
			return NULL;
		}
	}
	rna[slen + 1] = '\0';
	return rna;
}
