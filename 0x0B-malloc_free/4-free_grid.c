#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by alloc_grid
 *
 * @grid: the pointer to the 2 dimensional array
 * @height: the height of the array
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL && height > 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}

		free(grid);
	}
}
