#include "main.h"

/**
 * is_sqrt - checks if a number is sqrt
 * @n: number we're searching the sqrt of
 * @x: number to check if it's sqrt of 'n'
 *
 * Return: n and it's square root
 */
int is_sqrt(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
	{
		return (x);
	}
	return (is_sqrt(n, x + 1));

}

/**
 * _sqrt_recursion - calc the square root of a number
 * @n: number
 *
 * Return: The value of the square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (is_sqrt(n, 0));
}
