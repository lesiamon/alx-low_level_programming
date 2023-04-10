#include "main.h"
int get_endianness(void)
{
	unsigned int k;
	char *m;

	k = 1;
	m = (char *) &x;

	return ((int)*m);
}

