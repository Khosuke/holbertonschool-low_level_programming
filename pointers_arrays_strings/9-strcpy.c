#include "main.h"

/**
 * *_strcpy - function that copies the string pointed to by src
 * @dest: destination of the copy
 * @src: the string we want to copy
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, j = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	while (j <= i)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
