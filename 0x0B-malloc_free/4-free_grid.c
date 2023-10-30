#include <stdlib.h>

/**
 * free_grid - function to free a 2d array grid passed previously
 * @grid: this is the pointer to the array
 * @height: this is the height of the array
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
