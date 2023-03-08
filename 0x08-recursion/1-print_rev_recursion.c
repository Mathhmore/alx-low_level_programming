#include "main.h"

/**
 * _strlen - finds a string length
 * @str: string
 * Return: length of a string
 */
int _strlen(char *str)
{
	int count = 0;

	if (*str != '\0')
	{
		count++;
		str++;
		_strlen(str);
	}
	return (count);
}

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int len = _strlen(s);
	int i = len - 1;

	if (len > 0 && *s != '\0')
	{
		putchar(s[i]);
		i--;
		s++;
		_print_rev_recursion(s);
	}
	else
	{
		putchar('\n');
		return;
	}
}
