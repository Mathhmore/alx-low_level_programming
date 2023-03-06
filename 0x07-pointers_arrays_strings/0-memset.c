#include "main.h"

/**
 * _memset - Fill memory with a constant byte
 * @s: memory area
 * @b: constant byte to be filled in the memory
 * @n: number of bytes of memory to be filled
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
