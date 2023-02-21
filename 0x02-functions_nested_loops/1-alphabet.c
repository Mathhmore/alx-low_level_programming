#include <stdio.h>

/**
 * print_alphabet - print lowercases
 * Return: void
 */
void print_alphabet(void)
{
	for(char chr = 'a'; chr <= 'z'; chr++)
		_putchar(chr);
	_putchar('\n');
}
