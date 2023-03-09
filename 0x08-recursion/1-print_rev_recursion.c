#include "main.h"

/**
 * _strlen - finds a string length
 * @str: string
 * Return: length of a string
 */
int _strlen(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	str++;
	return (1 + _strlen(str));
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

	if (i >= 0 && *s != '\0')
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
