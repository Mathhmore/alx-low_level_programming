#include <stdio.h>
#include "main.h"

/**
 * _isupper - check whether uppercase or not
 * @c: character to be checked
 * Return: 1 for uppercase 0 else
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
