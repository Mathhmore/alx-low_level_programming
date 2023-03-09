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
	else if (n > 1)
		n--;
	return (n * factorial(n));
}
