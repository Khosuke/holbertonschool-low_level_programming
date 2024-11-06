#include "main.h"
#include <stdio.h>

/**
 * _strspn - function that gets the lenght of a prefix substring
 * @s: the string to check
 * @accept: the substring to look for
 *
 * Return: the number of byte in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, f = 0;

	for (i = 0; s[i] != '\0' ; i++)
	{
		for (j = 0; accept[j] != '\n'; j++)
		{
			if (s[i] == accept[j])
			{
				f = 1;
			}
		}
		if (f == 0)
		{
			return (i);
		}
		else
		{
			f = 0;
		}
	}
	return (i);
}
