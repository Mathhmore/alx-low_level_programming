#include "main.h"

/**
 * create_array - creates an array
 * @size: Size of the array
 * @c: character for initialization
 * Return: a pointer to the array and NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);

	malloc(sizeof(char) * size);
	char *array;
	unsigned int i;

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
