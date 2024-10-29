#include "main.h"

/**
 * print_number - function to print an integer
 * @n: number to print
 */
void print_number(int n)
{
	int i, div;
	
	div = 1000000000;
	if (n < 0)
	{
		_putchar('-');
		div = div * -1;
	}
	while (n % div == n)
	{
		div = div / 10;
	}
	while (div != 1 || div != -1)
	{
		div = div / 10;
		i = n / div;
		n = n % div;
		_putchar(i + '0');
	}
}
