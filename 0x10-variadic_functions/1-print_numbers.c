#include "variadic_functions.h"

/**
 * print_numbers - print number arguments
 * @separator: separator for numbers
 * @n: number of arguments
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i = 0;

	va_start(arg, n);
	while (i < n)
	{
		printf("%d", va_arg(arg, int));
		i++;
		if (i != n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
