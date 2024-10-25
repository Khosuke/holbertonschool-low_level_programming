#include <stdio.h>

/**
 * main - sum of all multiple of 3 and 5 below 1024
 *
 * Return: always 0
 */
int main(void)
{
	int i, rslt = 0;
	
	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0)
		{
			rslt = rslt + i;
		}
		else if (i % 5 == 0)
		{
			rslt = rslt + i;
		}
	}
	printf("%d\n", rslt);
	return (0);
}
