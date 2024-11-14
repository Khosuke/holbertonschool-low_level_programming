#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value of array
 * @max: max value of array
 *
 * Return: pointer to the created array
 */
int *array_range(int min, int max)
{
	int *arrint;
	int i = 0;

	if (min > max)
	{
		return (NULL);
	}
	arrint = malloc((max - min + 1) * sizeof(int));
	if(arrint == NULL)
		return (NULL);
	while (min <= max)
	{
		arrint[i] = min;
		i++;
		min++;
	}
	return (arrint);
}
