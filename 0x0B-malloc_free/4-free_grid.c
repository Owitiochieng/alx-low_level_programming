#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - This function frees 2d array
 * @grid: The 2D grid
 * @height: height input of the dimension grid
 */
void free_grid(int **grid, int height)
{
	int u;

	for (u = 0; u < height; u++)
	{
		free(grid[u]);
	}
	free(grid);
}
