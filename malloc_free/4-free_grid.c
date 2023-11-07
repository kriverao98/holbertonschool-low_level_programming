#include "main.h"
#include <stdlib.h>

/**
 *
 *
 *
 *
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
