#include "main.h"
#include <stdlib.h>

/**
 * free_grid - This function frees a 2d grid created by alloc_grid
 * @grid: 2d array to be freed
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int in = 0;

	for (; in < height; ++in)
	{
		free(grid[in]);
	}

	free(grid);
}
