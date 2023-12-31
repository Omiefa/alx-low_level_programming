#include "main.h"
#include <stdlib.h>

/**
 * free_grid- frees a 2 dimensional grid
 * @grid: 2D array
 * @height: height of the 2D array
 * Return: 0 if successful
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
