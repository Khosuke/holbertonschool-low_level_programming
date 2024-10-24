#include "main.h"

/**
 * print_to_98 - print from a number to 98
 *
 * Return: nothing to return
 */
void print_to_98(int n)
{ 
	while (n <= 98)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
		if (n < 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		n++;
	}
	_putchar('\n');
}
