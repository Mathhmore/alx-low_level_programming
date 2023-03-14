#include "main.h"

/**
 * free_grid - free a 2d array
 * @grid: 2d array to be freed
 * @height: height of the array
 */
void free_grid(int **grid, int height)
{
	int i;
	
	for (i = 0; i < height; i++)
		free(grid[i]);
<<<<<<< HEAD
	free(grid);
=======
	free (grid);
>>>>>>> 4ae7ff54c3b15aacbb6155bf8969a426db9842e7
}
