#include "main.h"

/**
 * *_memset - fill memory with a constant byte
 * @s: area of memory to fill
 * @b: constant byte
 * @n: first n bytes to be filled with b
 * 
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for(i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}