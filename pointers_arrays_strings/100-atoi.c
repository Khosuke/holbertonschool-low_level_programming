#include "main.h"

/**
 * _atoi - convert string to an integer
 * @s: string to convert
 *
 * Return: 0 if no numbers in string
 */
int _atoi(char *s)
{
	int i = 0, j = 0, k = 0; 
	int sign = 1;
	int num = 0;

	while (s[i] < '0' || s[i] > '9')
	{
		if (s[i] == '-')
		{
			k += 1;
		}
		if (k % 2 != 0)
		{
			sign = -1;
		}
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (j == 0)
		{
			num = s[i] - 48;
			j++;
		}
		else
		{
			num = num * 10 +  s[i] - 48;
		}
		i++;
	}
	return (num * sign);
}
