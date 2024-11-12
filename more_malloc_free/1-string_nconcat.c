#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings with n bytes of s2
 * @s1: first string
 * @s2: second string
 * @n: number of bytes for s2
 *
 * Return: Pointer to new string, NULL if fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sncat;
	unsigned int i = 0, j = 0;
	unsigned int size1 = 0, size2 = 0, sizec;

	if (s1 == NULL)
	{
		s1[0] = '\0';
	}
	if (s2 == NULL)
	{
		s2[0] = '\0';
	}
	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}
	if (n > size2)
	{
		n = size2;
	}
	sizec = size1 + n;
	sncat = malloc((sizec + 1) * sizeof(char));
	if (sncat == NULL)
	{
		return (NULL);
	}
	while (i < size1)
	{
		sncat[i] = s1[i];
		i++;
	}
	
	while (j < n && n <= size2)
	{
		sncat[i] = s2[j];
		j++;
		i++;
	}
	sncat[i] = '\0';
	return (sncat);
}
