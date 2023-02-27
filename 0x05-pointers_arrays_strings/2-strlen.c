#include <stdio.h>
#include "main.h"

/**
 * _strlen - finds length of a string
 * @s: string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int c = 0;

	while (*s =! '\0')
	{
		s++;
		c++;
	}
	return (c);
}
