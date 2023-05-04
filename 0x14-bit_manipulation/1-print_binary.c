#include "main.h"
#include <stdio.h>

/**
 * print_binary - converts unsigned int to binary
 * @n: int given
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int num = n, mask = 1;
	int length = 0;

	while (num > 0)
	{
		length++;
		num >>= 1;
	}
	length -= 1;

	if (length > 0)
		mask = mask << length;

	while (mask > 0)
	{
		if (n & mask)
			putchar('1');
		else
			putchar('0');
		mask >>= 1;
	}
}
