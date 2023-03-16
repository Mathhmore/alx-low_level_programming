#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: the pointer to the newly created array or NULL if it fails
 */
int *array_range(int min, int max)
{
	int *int_array, i, j = 0;

	if (min > max)
		return (NULL);

	int_array = malloc(sizeof(int) * (max - min +1));
	if (int_array == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		int_array[j] = i;
		j++;
	}
	return (int_array);
}
