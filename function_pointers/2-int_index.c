#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - search for an integer
 * @array: array of integers
 * @size: size of the array
 * @cmp: pointer to function used to compare values
 *
 * Return: Index of the first element which the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	
	while (i < size)
	{
		if ((*cmp)(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}
