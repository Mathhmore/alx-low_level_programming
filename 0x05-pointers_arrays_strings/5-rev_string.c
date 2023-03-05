#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int str_len = 0;
	int i = 0;
	char c;

	while (*s != '\0')
	{
		str_len++;
		s++;
	}
	s--;
	while (str_len >= 0)
	{
		c = *s;
		*s = s[i];
		s[i] = c;
		i++;
		s--;
		str_len--;
	}
}
