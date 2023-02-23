#include <stdio.h>
#include "main.h"

/**
 * print_square - print a square using #s
 * @sizw: size of the square
 * Return: void
 */
void print_square(int size)
{
	int i = 0;
	int j = 1;

	if (size <= 0)
		_putchar('\n');
	else
	{
		while (i < size)
		{
			if (j <= size)
			{
				while (j <= size)
				{
					_putchar('#');
					j++;
				}
			}
			j = 1;
			i++;
			_putchar('\n');
		}
	}
}
