#include <stdlib.h>

/**
 * free_grid - alloc_grid
 * @grid: pointer to 2D arrays
 * @height: array
 * Return: void
 */

void free_grid(int **grid, int height)
{
	height--;

	while (height >= 0)
	{
		free(*(grid + height));
		height--;
	}
	free(grid);
}

