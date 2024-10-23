#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: number to check
 *
 * Return: 0 for success
 */
int print_last_digit(int n)
{
	int last;

	if (n >= 0)
	{
		last = n % 10;
		_putchar(last + '0');
	}
	else
	{
		last = (n % 10) * -1;
		_putchar(last + '0');
	}
	return (last);
}
