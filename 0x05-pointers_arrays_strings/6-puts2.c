#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string given
 * Return: void
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
		str++;
	}
	putchar('\n');
}
