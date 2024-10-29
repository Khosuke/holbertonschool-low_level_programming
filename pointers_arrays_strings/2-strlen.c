#include "main.h"

/**
 * _strlen - Function that return the lenght of a string
 * @s: the string of char
 *
 * Return: the lenght of a string
 */
int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
