#include "main.h"

/**
 * print_line - function that draws a straight line
 * @n: width of the line (number of characters to print)
 */
void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
