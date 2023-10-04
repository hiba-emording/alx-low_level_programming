#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates a 2D array of integers.
 * @width: width of the grid.
 * @height: height of the grid.
 *
 * Return: pointer to the 2D array, or NULL if it fails.
 */

int **alloc_grid(int width, int height)
{
int **grid;
int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int **)malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}

			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
