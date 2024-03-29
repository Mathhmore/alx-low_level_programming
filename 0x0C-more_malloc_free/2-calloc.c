#include "main.h"

/**
 * _calloc - allocate a memory for an array using malloc
 * @nmemb: elements of the array
 * @size: size of each elements of the array
 * Return: a pointer to the allocated memory and exit 98 if fail
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *allocated_space;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	allocated_space = malloc(nmemb * size);
	if (allocated_space == NULL)
		return (NULL);
	while (i < nmemb * size)
	{
		*((char *)allocated_space + i) = 0;
		i++;
	}
	return (allocated_space);
}
