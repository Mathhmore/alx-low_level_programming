#include <stdio.h>
#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: character to be checked
 * Return: returns 1 if it is positiv, returns 0 if it is 0 and returns -1 else
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
