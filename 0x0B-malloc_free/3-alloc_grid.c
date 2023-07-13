#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid-returns a pointer to a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: a pointer
 */
int **alloc_grid(int width, int height)
{
	int i, j, **ptr_grid;

	if (width + height < 2 || width < 1 || height < 1)
	{
		return (NULL);
	}
	/*allocate memory to the row of the array*/
	ptr_grid = malloc(height * sizeof(*ptr_grid));
	if (ptr_grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{	/*allocate memory to each column of the array*/
		ptr_grid[i] = malloc(width * sizeof(**ptr_grid));
		if (ptr_grid == NULL)
		{	/*free previously allocated memory*/
			for (i--; i >= 0; i--)
			{
				free(ptr_grid[i]);
			}
			free(ptr_grid);
			return (NULL);
		}
		/*initialize each element to 0*/
		for (j = 0; j < width; j++)
		{
			ptr_grid[i][j] = 0;
		}
	}
	return (ptr_grid);
}
