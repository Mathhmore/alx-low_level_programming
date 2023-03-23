#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: separates strings
 * @n: number of arguments
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *s;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(arg, char*);
		if (s == NULL)
			printf("nil");
		else
			printf("%s", s);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(arg);
	printf("\n");
}
