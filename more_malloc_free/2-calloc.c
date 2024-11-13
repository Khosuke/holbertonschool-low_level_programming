#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocate memory for an array
 * @nmemb: number of elements in array
 * @size: bytes size of element 'nmemb'
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *tmp;
	unsigned char *ptr = NULL;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i < nmemb * size)
	{
		ptr[i] = 0;
		i++;
	}
	tmp = (void *)ptr;
	return (tmp);
}
