#include "main.h"

void print_binary(unsigned long int k)
{
	if (k >> 0)
	{
		if (k >> 1)
			print_binary(k >> 1);
		_putchar((k & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
