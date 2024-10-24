#include "main.h"

/**
 * times_table - print the table of 9
 *
 * Return: void nothing to return
 */
void times_table(void)
{
	int i, j, x;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			x = i * j;
			if (j > 0 && (x / 10) < 1)
			{
				_putchar(' ');
			}
			else if (i > 0 && j > 0)
			{
				_putchar((x / 10) + '0');
			}
			_putchar((x % 10) + '0');
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
