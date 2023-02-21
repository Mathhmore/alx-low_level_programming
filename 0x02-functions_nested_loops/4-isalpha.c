#include <stdio.h>
#include "main.h"

/**
 * _isalpha - check alphabet or not
 * @c: character input
 * Return: 0 if c is not letter and 1 if c is letter
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
