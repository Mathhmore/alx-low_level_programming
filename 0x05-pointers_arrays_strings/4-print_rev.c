#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints reverse of a string
 * @s: string
 * Return: void
 */
void print_rev(char *s)
{
	int str_len = 0;

	while (*s != '\0')
	{
		str_len++;
		s++;
	}
	s--;
	while (str_len > 0)
	{
		putchar(s[str_len]);
		str_len--;
	}
	putchar('\n');
}
