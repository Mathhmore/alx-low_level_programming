#include <stdio.h>
#include "main.h"

/**
 * _isdigit - check whether digit or not
 * @c: character to be checked
 * Return: 1 for digit 0 else
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	return (0);
}
