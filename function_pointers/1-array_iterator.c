#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: array of integers
 * @size: size of the array
 * @action: function to execute
 *
 * Return: No return, void function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0;

	while (i < size)
	{
		(*action)(array[i]);
		i++;
	}
}
