#include <stdio.h>

/**
 * main - print lowercase then uppercase
 * Return: 0 (success)
 */
int main(void)
{
	char chr, CHR;

	for (chr = 'a'; chr <= 'z'; chr++)
	{
		putchar(chr);
	}
	for (CHR = 'A'; CHR <= 'Z'; CHR++)
	{
		putchar(CHR);
	}
	putchar('\n');
	return (0);
}
