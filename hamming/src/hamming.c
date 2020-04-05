#include "hamming.h"

int compute(const char *lstrd, const char *rstrd)
{
		if (!lstrd || !rstrd)
				return ERRNULL;

		char *lc = (char*)lstrd;
		char *rc = (char*)rstrd;
		int dist = 0;
		while (1) {
				if ((*lc && !*rc) || (!*lc && *rc))
						return ERRLEN;
				if (!*lc && !*rc)
						return dist;
				if (*lc != *rc)
						dist++;
				lc++;
				rc++;
		}
}
