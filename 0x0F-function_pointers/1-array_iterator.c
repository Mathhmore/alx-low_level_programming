#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on
 * each element of an array
 * @size: size of the array
 * @array: array given
 * @action: a pointer to a function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (array != NULL && action != NULL)
	{
		while (size != 0)
		{
			action(array[i]);
			i++;
			size--;
		}
	}
}
