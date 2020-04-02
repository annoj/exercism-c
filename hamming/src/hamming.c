#include "hamming.h"

int compute(const char *lstrd, const char *rstrd)
{
		if (!lstrd || !rstrd)
				return ERRNULL;

		const char *lc = lstrd;
		const char *rc = rstrd;
		int dist = 0;
		while (1){
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
