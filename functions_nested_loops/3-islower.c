#include "main.h"

/**
 * _islower - Check if character is lowercase
 * @c: the character to check
 *
 * Return: 1 for lower case, 0 if not
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
