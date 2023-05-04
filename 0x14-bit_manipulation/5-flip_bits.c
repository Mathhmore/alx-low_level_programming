#include "main.h"

/**
 * flip_bits - finds the number of bits you would need to flip to get from one
 * number to another
 * @n: number to be changed
 * @m: changed number
 * Return: number of bits to flip to get m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int j;

	j = n ^ m;

	while (j > 0)
	{
		i += (j & 1);
		j >>= 1;
	}

	return (i);
}
