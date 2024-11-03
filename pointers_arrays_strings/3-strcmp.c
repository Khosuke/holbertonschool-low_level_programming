#include "main.h"

/**
 * _strcmp - function to compare two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: comparison of first different character, 0 if both string are same
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	/* Loop stop at end of a string */
	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		/* If a character is different from another */
		if (s1[i] != s2[i])
		{
			/* Return comparison between the two */
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
