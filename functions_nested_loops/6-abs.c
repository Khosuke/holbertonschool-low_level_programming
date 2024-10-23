#include "main.h"

/**
 * _abs - return absolute value of integer
 * @n number to check
 *
 * Return: n if positive, n*-1 if negative
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
