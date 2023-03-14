#include "main.h"

/**
 * alloc_grid - allocates a memory for a two dimensional array
 * @width: width of the array
 * @height: height of the array
 * Return: a pointer to the two dimensional array and NULL for failure
 */
int **alloc_grid(int width, int height)
{
	int **_2d_array;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	_2d_array = malloc(sizeof(int *) * height);

	if (_2d_array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		_2d_array[i] = malloc(sizeof(int *) * width);
		for (j = 0; j < width; j++)
		{
			if (_2d_array[i] == NULL)
			{
				for (i = 0; i < height; i++)
					free(_2d_array[i]);
				free(_2d_array);
				return (NULL);
			}
			_2d_array[i][j] = 0;
		}
	}
	return (_2d_array);
}
