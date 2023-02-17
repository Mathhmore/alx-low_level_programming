#include <stdio.h>

/**
 * main - print lowercase alphabet except q and e
 * Return: 0 (success)
 */
int main(void)
{
	char chr;

	for (chr = 'a'; chr <= 'z'; chr++)
	{
		if (chr == 'q' || chr == 'e')
		{
		}
		else
			putchar(chr);
	}
	putchar('\n');

	return (0);
}
