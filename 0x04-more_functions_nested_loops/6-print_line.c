#include <stdio.h>
#include "main.h"

/**
 * print_line - print a line using _
 * @n: number of _s given from the user
 * Return: void
 */
void print_line(int n)
{
	int i = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
