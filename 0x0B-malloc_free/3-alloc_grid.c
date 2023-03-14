#include "main.h"

/**
 * alloc_grid - allocates a memory for a two dimensional array
 * @width: width of the array
 * @height: height of the array
 * Return: a pointer to the two dimensional array and NULL for failure
 */
int **alloc_grid(int width, int height)
{
	int 2d_array[height][width];
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	2d_array = malloc(width * height);

	if (2d_array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			2d_array[i][j] = 0;
	}
	return (2d_array);
}
