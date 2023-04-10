#include "main.h"


int clear_bit(unsigned long int *l, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*l &= ~(1 << index);

	return (1);
}
