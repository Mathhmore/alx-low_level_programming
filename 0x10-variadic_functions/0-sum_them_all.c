#include "variadic_functions.h"

/**
 * sum_them_all - add up all the arguments
 * @n: number of arguments
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	int sum = 0;
	unsigned int i = 0;

	va_start(arg, n);
	if (n == 0)
		return (0);
	while (i < n)
	{
		sum += va_arg(arg, int);
		i++;
	}
	va_end(arg);
	return (sum);
}
