#include "main.h"

/**
 * _strlen_recursion - find length of a string
 * @s: string
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int count = 0;
	
	if (*s != '\0')
	{
		count++;
		s++;
		_strlen_recursion(s);
	}
	return (count);
}
