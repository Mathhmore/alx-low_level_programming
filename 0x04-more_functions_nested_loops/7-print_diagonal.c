#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - print a diagonal with \ at the end
 * @n: number of \s given from the user
 * Return: void
 */
void print_diagonal(int n)
{
	int i = 0;
	int j = 1;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (i < n)
		{
			if (j <= i)
			{
				while (j <= i)
				{
					_putchar(' ');
					j++;
				}
			}
			j = 1;
			_putchar('\\');
			_putchar('\n');
		}
	}
}
