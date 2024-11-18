#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - 
 * @array: 
 * @size: 
 * @action: 
 *
 * Return: No return, void function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i = 0;
	while (i < size)
	{
		(*action)(array[i]);
		i++;
	}
	return;
}
