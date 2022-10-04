#include "main.h"

/**
 * free_grid - a function that frees the 2D array created
 * by alloc_grid function
 * @grid: the 2D array to be freed
 * @height: height of the array
 * Return: returns nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
