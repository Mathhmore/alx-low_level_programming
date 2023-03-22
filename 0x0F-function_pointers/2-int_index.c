#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @size: size of the array
 * @array: array given
 * @cmp: a pointer to a function
 * Return: the index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		while (size != 0)
		{
			cmp(array[i]);
			if (cmp(array[i]) == 1)
				return (i);
			i++;
			size--;
		}
	}
	return (-1);
}
