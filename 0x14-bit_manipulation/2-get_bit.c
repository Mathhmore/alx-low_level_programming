#include "main.h"

/**
 * get_bit - return value of a bit at index
 * @n: num given
 * @index: index given
 * Return: value of a bit at a given index or -1 for error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int an, h_n = 1;
	int length = 0, count = 0;

	an = n;
	while (an > 0)
	{
		length++;
		an = an >> 1;
	}
	length -= 1;
	count = length;
	if (length > 0)
		h_n = h_n << length;
	while (h_n > 0)
	{
		if (index = count)
			return (h_n & n);
		h_n = h_n >> 1;
		count--;
	}
	return (-1);
}
