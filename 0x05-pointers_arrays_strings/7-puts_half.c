#include <stdio.h>
#include "main.h"

/**
 * _strlen - finds string length
 * @str: string given
 * Return: length of the string str
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
 * puts_half - prints half of a string
 * @str: string given
 * Return: void
 */
void rev_string(char *str)
{
	int str_len = _strlen(str);
	int i = str_len / 2;

	if (str_len % 2 != 0)
		i++;
	while (i != str_len)
	{
		putchar(str[i]);
		i++;
	}
}
