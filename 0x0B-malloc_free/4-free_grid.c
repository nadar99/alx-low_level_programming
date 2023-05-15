#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid
 * @grid : 2d array to free
 * @height: of the array
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	free(grid);
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
}
