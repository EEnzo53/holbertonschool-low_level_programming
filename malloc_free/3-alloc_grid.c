#include <stdio.h>
#include "main.h"
/**
 * alloc_grid - allocates a 2D array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to 2D array, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}
	int **grid;
	int i;
	int j;

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int))
	}
	while (i > 0)
	{
		i--;
		free(grid[i]);
	}
	free(grid);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
