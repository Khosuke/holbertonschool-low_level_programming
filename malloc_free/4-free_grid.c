#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Free the memory of a 2D grid created by another function
 * @grid: the previously created grid
 * @height: the grid height
 *
 * Return: No return
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
