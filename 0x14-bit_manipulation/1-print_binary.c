#include "main.h"

/**
 * print_binary - prints binary representation of an unsigned int
 * @n: num given
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned int length = 0, h_n = 1;
	unsigned long int an;

	an = n;
	while (an > 0)
	{
		length++;
		an = an << 1;
	}
	length -= 1;
	if (length > 0)
		h_n = h_n << length;
	while (h_n > 0)
	{
		if (h_n & n)
			putchar('1');
		else
			putchar('0');
		h_n = h_n >> 1;
	}
}
