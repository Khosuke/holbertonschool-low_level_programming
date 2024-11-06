#include "main.h"

/**
 * *_memcpy - function to copy a memory area
 * @dest: destination of copy
 * @src: souce of bytes to copy to dest
 * @n: number of byte to copy from src
 *
 * Return: Pointer to Dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
