#include "main.h"

/**
 * help_sqrt - helps thw function
 * @n: number
 * @t: another number for trial
 * Return: square root
 */
int help_sqrt(int n, int t)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else if (n == t * t)
		return (t);
	else if (t * t > n)
		return (-1);
	t++;
	return (help_sqrt(n, t));
}

/**
 * _sqrt_recursion - square root of a number
 * @n: number
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	return (help_sqrt(n, 0));
}
