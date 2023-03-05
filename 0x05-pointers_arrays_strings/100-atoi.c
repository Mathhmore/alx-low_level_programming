#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * digit - find the first digit in a given string
 * str: given string
 * Return: index of the first digit
 */
int digit(char *str)
{
	int c = 0;

	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
			return (c);
		c++;
		str++;
	}
	return (-1);
}

/**
 * sign_count - counts - signes
 * @str: string given
 * Return: number of -s
 */
int signOf(char *str)
{
	int count = 0, s = 1;

	while (*str != '\0')
	{
		if (*str == '-')
		{
			count++;
			continue;
		}
		else if (*str >= '0' && *str <= '9')
			break;
		str++;
	}
	if (count % 2 != 0)
		s = -1
	return (s);
}

/**
 * atoi - converts string to an int
 * @s: string given
 * Return: converted int
 */
int _atoi(char *s)
{
	int num = 0, numc = 0, n = 1, sign;
	
	sign = signOf(s);
	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			int cr;

			if (*s == '0')
				cr = 0;
			else if (*s == '1')
				cr = 1;
			else if (*s == '2')
				cr = 2;
			else if (*s == '3')
				cr = 3;
			else if (*s == '4')
				cr = 4;
			else if (*s == '5')
				cr = 5;
			else if (*s == '6')
				cr = 6;
			else if (*s == '7')
				cr = 7;
			else if (*s == '8')
				cr = 8;
			else if (*s == '9')
				cr = 9;
			if (numc > 0)
			{
				int i;

				for (i = 0; i < numc; i++)
					n *= 10;
			}
			num = num * n + cr;
			numc++;
		}
		if (numc > 0 && !(*s >= '0' && *s <= '9'))
			break;
		else
			continue;
		s++;
	}
	num = sign * num;
	return (num);
}
