#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the grid, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int *ptr2;
	int len = 0;
	int col;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);

	while (len < height)
	{
		ptr2 = malloc(sizeof(int) * width);
		if (ptr2 == NULL)
		{
			while (len > 0)
			{
				len--;
				free(ptr[len]);
			}
			free(ptr);
			return (NULL);
		}

		col = 0;
		while (col < width)
		{
			ptr2[col] = 0;
			col++;
		}

		ptr[len] = ptr2;
		len++;
	}

	return (ptr);
}
