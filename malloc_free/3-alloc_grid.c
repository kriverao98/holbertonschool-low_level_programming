#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - This function returns a pointer to
 * a 2 dimensional array of integers.
 * @width: width of 2d array
 * @height: height of 2d array
 * Return: NULL if width or height is 0, otherwise, return grid
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int in, dex;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int **)malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}

	for (in = 0; in < height; in++)
	{
		grid[in] = (int *)malloc(width * sizeof(int));

		if (grid[in] == NULL)
		{
			for (dex = 0; dex < in; dex++)
			{
				free(grid[dex]);
			}

			free(grid);
			return (0);
		}

		for (dex = 0;  dex < width; dex++)
		{
			grid[in][dex] = 0;
		}
	}

	return (grid);
}
