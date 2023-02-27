#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps 2 integers
 * @a: int 1
 * @b: int 2
 * Return: void
 */
void swap_int(int *a, int *b);
{
	int *c;
	*c = *a;
	*a = *b;
	*b = *c;
}
