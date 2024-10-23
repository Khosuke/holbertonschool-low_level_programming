#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: number to check
 *
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int last;

	if (n >= 0)
	{
		last = n % 10;
		return (last);
	}
	else
	{
		last = (n * -1) % 10;
		return (last);
	}
}
