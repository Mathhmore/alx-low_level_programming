#include "main.h"

/**
 * _puts_recursion - puts function using recursion
 * @s: string
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		putchar('\n');
		return;
	}
}
