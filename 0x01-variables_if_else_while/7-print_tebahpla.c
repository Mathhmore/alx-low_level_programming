#include <stdio.h>

/**
 * main - print lowercase alphabet in reverse
 * Return: 0 (success)
 */
int main(void)
{
	char chr;

	for (chr = 'z'; chr >= 'a'; chr--)
	{
		putchar(chr);
	}
	putchar('\n');

	return (0);
}
