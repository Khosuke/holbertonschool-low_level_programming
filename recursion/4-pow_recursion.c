#include "main.h"

/**
 * _pow_recursion - calc the power of a number
 * @x: number to be raised to the power of y
 * @y: the wanted power
 *
 * Return: Value of 'x' by power of 'y' or '-1' if 'y' < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (x == 0)
	{
		return (0);
	}
	return (x * (_pow_recursion(x, y - 1)));
}
