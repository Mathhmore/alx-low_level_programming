#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated with a call to malloc:
 * malloc(old_size)
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 * Return: a pointer to the newly allocated space or NULL for failar
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newly_allocated;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	newly_allocated = malloc(new_size * sizeof(ptr));
	ptr = malloc(old_size);
	if(ptr == NULL)
	{
		newly_allocated = malloc(new_size);
		ptr = malloc(old_size);
	}
	if (newly_allocated == NULL || ptr == NULL)
		return (NULL);
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			*((char *)newly_allocated + i) = *((char *)ptr + i);
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size * sizeof(ptr); i++)
			*((char *)newly_allocated + i) = *((char *)ptr + i);
	}
	free(ptr);
	return (newly_allocated);
}
