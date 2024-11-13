#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars with a specific char
 * @size: the wanted size of the array
 * @c: the char we want to specify
 *
 * Return: a pointer to the array, NULL if it fails or size is zero
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(size * sizeof(char));
	if (str == NULL || size == 0)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
