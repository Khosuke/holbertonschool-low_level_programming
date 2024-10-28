#include "main.h"

/**
 * _isdigit - check if input is digit
 * @c: the character to check
 *
 * Return: 1 if c is digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
