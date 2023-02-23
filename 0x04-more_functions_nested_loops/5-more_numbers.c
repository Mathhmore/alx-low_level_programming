#include <stdio.h>
#include "main.h"

/**
 * more_numbers - print numbers 0 through 14 10times
 * Return: void
 */
void more_numbers(void)
{
	int i = 0;
	int j = 0;

	while (i <= 9)
	{
		while (j <= 14)
		{
			if (j > 9)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			j++;
		}
		j = 0;
		_putchar('\n');
		i++;
	}
}
