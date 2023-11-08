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
	int in = 0;
	int dex = 0;

	if ((width == 0) || (height == 0))
	{
		return (0);
	}

	grid = ((int)malloc(sizeof(int))heigth);

	if (grid == 0)
	{
		return (0);
	}

	for (; in < height; in++)
	{
		grid[in] = ((int)malloc(sizeof(int)width));

		if (grid[in] == 0)
		{
			for (; dex < in; dex++)
			{
				free(grid[in]);
			}

			free(grid);
			return (0);
		}

		for (; dex < width; ++dex)
		{
			grid[in][dex] = 0;
		}
	}

	return (grid);
}
