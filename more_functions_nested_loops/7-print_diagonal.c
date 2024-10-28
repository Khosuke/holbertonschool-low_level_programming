#include "main.h"

/**
 * print_diagonale - function that draws a diagonal line
 * @n how long the diagonal should be
 */
void print_diagonal(int n)
{
	int i = 0, j;

	while (i < n)
	{
		for (j = 1; j <= i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
