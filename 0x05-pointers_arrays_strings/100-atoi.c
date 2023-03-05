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
int _atoi(char *s)
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
			int n = 1;
			if (numc > 0)
			{
				for (int i = 0; i < numc; i++)
					n *= 10;
			}
			num = num * n + cr;
			numc++;
		}
		if (numc > 0 && !(*s >= '0' && *s <= '9'))
			break;
		s++;
	}
	num = sign * num;
	return (num);
}
