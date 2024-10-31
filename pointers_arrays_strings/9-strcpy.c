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
	int i;
	char *ptr = dest;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (ptr);
}
