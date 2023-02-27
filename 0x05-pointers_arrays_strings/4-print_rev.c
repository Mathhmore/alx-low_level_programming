#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints reverse of a string
 * @str: string
 * Return: void
 */
void print_rev(char *str)
{
	int str_len = 0;

	while (*str != '\0')
	{
		str_len++;
		str++;
	}
	str--;
	while (str_len > 0)
	{
		putchar(str[str_len]);
		str_len--;
	}
	putchar('\n');
}
