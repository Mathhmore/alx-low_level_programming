#include <stdio.h>
#include "main.h"

/**
 * print_array - prints array till the nth element
 * @a: array given
 * @n: number of element to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int count = 0;
	while (count < n)
	{
		printf("%d, ",a[count]);
	}
	putchar('\n');
}
