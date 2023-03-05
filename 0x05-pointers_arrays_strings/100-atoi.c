#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * sign_count - counts - signes
 * @str: string given
 * Return: number of -s
 */
int sign_count(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
			break;
		else if (*str == '-')
			count++;
	}
	return (count);
}

/**
 * atoi - converts string to an int
 * @s: string given
 * Return: converted int
 */
int atoi(char *s)
{
	int sign, num = 0, numc = 0;
	
	if (sign_count(s) % 2 == 0)
		sign = 1;
	else
		sign = -1;
	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			int cr;

			switch (*s)
			{
				case '0':
					cr = 0;
				case '1':
					cr = 1;
				case '2':
					cr = 2;
				case '3':
					cr = 3;
				case '4':
					cr = 4;
				case '5':
					cr = 5;
				case '6':
					cr = 6;
				case '7':
					cr = 7;
				case '8':
					cr = 8;
				case '9':
					cr = 9;
			}
			num = num * pow(10, numc) + cr;
			numc++;
		}
		if (numc > 0 && !(*s >= '0' && *s <= '9'))
			break;
		s++;
	}
	num = sign * num;
	return (num);
}
