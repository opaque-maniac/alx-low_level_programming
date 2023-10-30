#include <stdlib.h>

/**
 * alloc_grid - function to create pointer to two dimensional array
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to array, NULL otherwise
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (height < 1 || width < 1)
		return (NULL);

	grid = (int **)malloc(height * sizeof(*grid));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(**grid));
		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
