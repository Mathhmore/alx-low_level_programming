#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - print digits without 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i != 2 and i != 4)
			_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
