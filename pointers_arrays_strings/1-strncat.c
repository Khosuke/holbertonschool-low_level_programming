#include "main.h"

/**
 **_strncat - function to concatenate two strings
 * @dest: the string that gets another string at the end of it
 * @src: the string that gets appended
 * @n: number of bytes from src string
 *
 * Return: pointer to result string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';

	return dest;
}
