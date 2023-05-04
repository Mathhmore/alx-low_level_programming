#include "main.h"

/**
 * print_binary - prints binary representation of an unsigned int
 * @n: num given
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int an, h_n = 1;
	int length = 0;

	an = n;
	while (an > 0)
	{
		length++;
		an = an >> 1;
	}
	length -= 1;
	if (length > 0)
		h_n = h_n << length;
	while (h_n > 0)
	{
		if (h_n & n)
			_putchar('1');
		else
			_putchar('0');
		h_n = h_n >> 1;
	}
}