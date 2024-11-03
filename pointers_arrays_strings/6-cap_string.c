#include "main.h"

/**
 * cap_string : capitalize each word
 * @str: string to transform
 *
 * Return: the string transformed
 */
char *cap_string(char *str)
{
	int i;

	if(str[0] >= 97 && str[0] <= 122)
	{
		str[0] = str[0] - 32;
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 32 || str[i] == 10 || str[i] == 9)
		{
			if(str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
	}
	return (str);
}
