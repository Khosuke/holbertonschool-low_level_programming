#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Function that allocate a new space in memory
 * which contains a copy of the string given as a parameter
 * @str: The string we want to duplicate
 *
 * Return: A pointer to the duplicated string
 * NULL if insufficient memory available or str = NULL
 */
char *_strdup(char *str)
{
	char *sdup;
	unsigned int size = 0, i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[size] != '\0')
	{
		size++;
	}
	sdup = malloc((size + 1) * sizeof(char));
	if (sdup == NULL)
	{
		return (NULL);
	}
	while (i <= size)
	{
		sdup[i] = str[i];
		i++;
	}
	return (sdup);
}
