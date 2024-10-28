#include "main.h"

/**
 * more_numbers - print number from 0 to 14 ten times
 */
void more_numbers(void)
{
	int i, num;

	for (i = 0; i <= 9; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');

	}
}
