#include <stdio.h>
#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i = 1;
	int j = size - 1;
	int k = 1, l, m = 1;

	if (size > 0)
	{
		while (i <= size)
		{
			while (k <= j)
			{
				_putchar(' ');
				k++;
			}
			l = size - j;
			while (m <= l)
			{
				_putchar('#');
				m++;
			}
			m = 1;
			k = 1;
			_putchar('\n');
			i++;
			j--;
		}
	}
	else
	{
		_putchar('\n');
	}
}
