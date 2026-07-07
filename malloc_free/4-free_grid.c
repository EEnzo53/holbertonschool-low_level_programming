#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2 dimensional grid previously created
 * @grid: pointer to array of int pointers (the grid)
 * @height: number of rows in the grid
 *
 * Description: Frees each row of the grid and then frees the grid pointer
 * itself. Does nothing if grid is NULL.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
