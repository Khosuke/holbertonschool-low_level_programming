#include "main.h"

/**
 * *_strncpy - function to copy a string source to dest
 * @dest: the destination for the copy
 * @src: the source of the copy
 * @n: number of characters to be copied from the source
 *
 * Return: the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copy up to n characters from src to dest */
	for (i = 0; i < n && src[i] != '\0'; i++) 
	{
	dest[i] = src[i];
	}
	/* If src is shorter than n, fill the rest of dest with null characters */
	for (; i < n; i++) 
	{
	dest[i] = '\0';
	}
	return dest;
}
