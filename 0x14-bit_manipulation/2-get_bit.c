#include "main.h"

/**
 * get_bit - get a bit at the given index
 * @n: number
 * @index: index given
 * Return: bit 0 or 1 or -1 if error occur
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned int max_bits;

	max_bits = (sizeof(unsigned long int) * 8);
	if (index > max_bits)
		return (-1);

	bit = ((n >> index) & 1);

	return (bit);
}
