#include "main.h"

/**
 * *cap_string : capitalize each word
 * @str: string to transform
 *
 * Return: the string transformed
 */
char *cap_string(char *str)
{
	int i, j;
	char c[13] = {' ', '\t', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	if (str[0] >= 97 && str[0] <= 122)
	{
		str[0] = str[0] - 32;
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (str[i] == c[j] || str[i] == 10)
			{
				if (str[i + 1] >= 97 && str[i + 1] <= 122)
				{
					str[i + 1] = str[i + 1] - 32;
				}
			}
		}
	}
	return (str);
}
