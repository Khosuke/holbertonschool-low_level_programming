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
	unsigned char* ptr = NULL;
	unsigned int i = 0;
	
	ptr = malloc(nmemb * size);
	while (i < size)
	{
		((unsigned char*)ptr)[i] = '\0';
		i++;
	}
	if (ptr == NULL)
    	return (NULL);
	return (ptr);
}
