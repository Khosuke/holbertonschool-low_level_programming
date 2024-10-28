#include "main.h"

/**
 * print_triangle - Print a triangle
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int idx1, x, y;

	for (idx1 = 1; idx1 <= size; idx1++)
	{
		x = size - idx1;
		y = idx1;
		while (x > 0)
		{
			_putchar(' ');
			x--;
		}
		while (y > 0)
		{
			_putchar('#');
			y--;
		}
		_putchar('\n');
	}
	if (size < 0)
	{
		_putchar('\n');
	}
}
