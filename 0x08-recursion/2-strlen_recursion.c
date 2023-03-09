#include "main.h"

/**
 * _strlen_recursion - find length of a string
 * @s: string
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
	}
	return (1 + _strlen_recursion);
}
