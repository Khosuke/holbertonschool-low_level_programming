#include <stdio.h>

/**
 * main - search largest prime factor of number
 *
 * Return: always 0
 */
int main(void)
{
	unsigned long i, n;

	n = 612852475143;
	i = 2;
	while (n != 1)
	{
		if (n % i == 0)
		{
			n = n / i;
		}
		else
		{
			i++;
		}
	}
	printf("%ld\n", i);
	return (0);
}
