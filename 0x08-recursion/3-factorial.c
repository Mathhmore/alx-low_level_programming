#include "main.h"

/**
 * factorial - factorial of a number
 * @n: number
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	n--;
	return ((n + 1) * factorial(n));
}
