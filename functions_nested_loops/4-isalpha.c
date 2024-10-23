#include "main.h"

/**
 * _isalpha - check if character is alpha
 * @c: character to check
 *
 * Return: 1 for character is alpha, 0 if not
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
