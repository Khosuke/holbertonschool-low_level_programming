#include "main.h"

/**
 * *_strpbrk - search a string for any set of bytes
 * @s: string to check
 * @accept: the characters to look for
 *
 * Return: remaining string after first character matched, null if not found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s = s + i;
				return (s);
			}
		}
	}
	return ('\0');
}
