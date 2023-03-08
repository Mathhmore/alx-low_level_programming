#include "main.h"

/**
 * _puts_recursion - puts function using recursion
 * @s: string
 * Return: void
 */
void _puts_recursion(char *s)
{
	putchar(*s);
	s--;

	if (*s != '\0')
		_puts_recursion(s);
	else
	{
		putchar('\n');
		return;
	}
}
