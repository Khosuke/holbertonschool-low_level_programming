#include "main.h"

/**
 * _atoi - convert string to an integer
 * @s: string to convert
 *
 * Return: 0 if no numbers in string
 */
int _atoi(char *s)
{
	int i, j, k = 0; 
	int sign = 1;
	int num = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (j < i)
	{
		if (s[j] == '-')
		{
			k += 1;
		}
		if (k % 2 != 0)
		{
			sign = -1;
		}
		if (s[j] >= '0' && s[j] <= '9')
		{
			num = (num * 10) +  (s[j] - 48) ;
		}
		j++;
	}
	return (num * sign);
}
