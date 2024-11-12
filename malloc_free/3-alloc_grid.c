#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - alloc memory to a 2 dimensional array of integers
 * @width: the wanted width of the grid
 * @height: the wanted height of the grid
 *
 * Return: A pointer to the grid, NULL on failure
 * Null if width or height is zero
 */
int **alloc_grid(int width, int height)
{
	int h = 0, w = 0;
	int **arrgrid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arrgrid = malloc(height * sizeof(int *));
	if (arrgrid == NULL)
	{
		return (NULL);
	}
	while (h < height)
	{
		arrgrid[h] = malloc(width * sizeof(int));
		if (arrgrid[h] == NULL)
		{
			free(arrgrid);
			return (NULL);
		}
		while (w < width)
		{
			arrgrid[h][w] = 0;
			w++;
		}
		h++;
	}
	return (arrgrid);
}
