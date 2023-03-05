#include <stdio.h>
#include "main.h"

/**
 * _strlen - finds string length
 * @str: string given
 * REturn: length of the string str
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * rev_string - reverses a string
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int str_len = _strlen(s);
	int i = 0;
	char c;

	while (i < (str_len - 1))
	{
		c = s[i];
		s[i] = s[str_len - 1];
		s[str_len - 1] = c;
		i++;
		str_len--;
	}
}
