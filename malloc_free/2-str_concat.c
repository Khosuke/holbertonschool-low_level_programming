#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: Null on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *scat;
	unsigned int i = 0, j = 0;
	unsigned int size1 = 0, size2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}
	scat = malloc((size1 + size2 + 1) * sizeof(char));
	if (scat == NULL)
	{
		return (NULL);
	}
	while (i < size1)
	{
		scat[i] = s1[i];
		i++;
	}
	while (j < size2)
	{
		scat[i] = s2[j];
		j++;
		i++;
	}
	scat[i] = '\0';
	return (scat);
}
