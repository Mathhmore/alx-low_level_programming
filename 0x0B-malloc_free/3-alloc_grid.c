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
	_2d_array = malloc(width * height);

	if (_2d_array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			_2d_array[i][j] = 0;
	}
	return (_2d_array);
}
