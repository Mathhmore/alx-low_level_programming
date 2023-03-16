#include "main.h"

/**
 * malloc_checked - allocate a memory using malloc
 * @b: amount of memory to be allocated
 * Return: a pointer to the allocated memory and exit 98 if fail
 */
void *malloc_checked(unsigned int b)
{
	char *allocated_space;

	allocated_space = malloc(b);
	if (allocated_space == NULL)
		exit(98);
	return (allocated_space);
}
