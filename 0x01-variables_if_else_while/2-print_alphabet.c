#include <stdio.h>

/**
 * main - print lowercase alphabet
 * Return: 0 (success)
 */
int main(void)
{
	char chr;
	for (chr = 'a'; chr <= 'z'; chr++)
	{
		putchar(chr);
	}
	putchar('\n');

	return (0);
}
