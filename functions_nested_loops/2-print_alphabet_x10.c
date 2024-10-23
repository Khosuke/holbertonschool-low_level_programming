#include "main.h"

/**
 * print_alphabet_x10 - print alphabet ten times
 *
 * Return: 0 for success
 */
int print_alphabet_x10(void)
{
	int i, alpha;

	for (i = '0'; i <= '9'; i++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
	return (0);
}
