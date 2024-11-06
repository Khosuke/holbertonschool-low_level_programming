#include "main.h"

/**
 * *_strchr - function to locate a character in string
 * @s: string to check
 * @c: character fo find
 *
 * Return: pointer to first occurence of c or null if not found
 */
char *_strchr(char s[], char c)
{
	unsigned int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			s = s + i;
			return (s);
		}
	}
	if (c == '\0')
	{
		return (&s[i]);
	}
	return ('\0');
}
