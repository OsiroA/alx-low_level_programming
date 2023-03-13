#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * alloc_grid - This function returns a pointer to
 * a 2-Dimensional array of integers
 * @width: an integer representing the width of the grud
 * @height: an integer showing the height of the grid
 * Return: NULL or a pointer
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int h = 0, w = 0;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);
	/* Declare the first dimension of the grid */
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (h = 0; h < height; h++)
	{
		/*declare the second dimension */
		grid[h] = malloc(sizeof(int) * width);
		if (grid[h] == NULL)
		{
			if (--h >= 0)
				free(grid[h]);
			free(grid);
			return (NULL);
		}
		else
		{
			for (w = 0; w < width; w++)
				grid[h][w] = 0;
		}
	}
	return (grid);
}
