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
	int sign, num, numc = 0;
	
	if (sign_count(s) % 2 == 0)
		sign = 1;
	else
		sign = -1;
	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			int cr = s + 0;

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
