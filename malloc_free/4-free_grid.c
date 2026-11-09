#include <stdlib.h>
#include "main.h"
/**
 * free_grid - Free the allocated space for task 3-alloc_grid.c
 * @grid: grid to free
 * @height: numbers of row of to grids
 *
 * return: Nothin
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
