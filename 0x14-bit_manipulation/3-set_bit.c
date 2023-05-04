#include "main.h"

/**
 * set_bit - set a bit at a given index to 1
 * @n: number given
 * @index: index to be set
 * Return: 1 on success and -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max_bits;
	unsigned long int mask = 1;

	max_bits = (sizeof(unsigned long int) * 8);
	if (index > max_bits)
		return (-1);

	mask <<= index;
	*n = (*n | mask);

	return (1);
}
