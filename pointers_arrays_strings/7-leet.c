#include "main.h"

/**
 * *leet - transform a string to leet speak
 * @s: string to transform
 *
 * Return: the translated string
 */
char *leet(char *s)
{
	int i, j;
	char c[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char d[10] = {'4', '3', '0', '7', '1', '4', '3', '0',  '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; c[j] != '\0'; j++)
		{
			if (s[i] == c[j])
			{
				s[i] = d[j];
				break;
			}
		}
	}
	return (s);
}
