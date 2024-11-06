#include "main.h"

/**
 * *_strstr - locate a substring
 * @haystack: string to check
 * @needle: substring to look for
 *
 * Return: pointer to located substring or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, len;

	for (len = 0; needle[len] != '\0'; len++)
	{
	}
	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i] == needle[j])
			{
				haystack = haystack + i;
				if (j == len)
				{
					return (haystack - len);
				}
			}
		}
	}
	return (haystack - len);
}
/* not the good return, need more works */
