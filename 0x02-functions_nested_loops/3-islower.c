#include <stdio.h>
#include "main.h"

/**
 * _islower - check lowercase or not
 * @c: character input
 * Return: 0 for uppercase and 1 for lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
