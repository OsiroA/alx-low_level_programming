#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_grid - This function frees the two-dimensional grid created previously
 * in this same repository
 * @grid: a grid to be freed
 * @height: an integer
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
		free(grid[h]);
	free(grid);
}
