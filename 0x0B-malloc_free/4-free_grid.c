#include "main.h"
/**
 * free_grid - frees a 2 dimensional grid previously created by  alloc_grid
 * @grid: pointer to 2d grid
 * @height: height of array (row)
 */
void free_grid(int **grid, int height)
{
	int i;

	if (!grid || height == 0)
		return;
	for (i = height; i >= 0; i--)
		free(grid[i]);
	free(grid);
}
