#include <stdio.h>

/**
 * main - print single digit number
 * Return: 0 (success)
 */
int main(void)
{
	int num;
	char chr;

	for (num = 0; num <= 9; num++)
	{
		putchar(num +  '0');
	}

	for (chr = 'a'; chr <= 'f'; chr++)
	{
		putchar(chr);
	}
	putchar('\n');

	return (0);
}
