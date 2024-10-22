#include <stdio.h>

/**
 * main - combinations of three single digits
 *
 * Return: 0 for success
 */
int main(void)
{
	int first, second, third;

	for (first = '0', second = '1', third = '2'; first <= '9'; first++)
	{
		for (second = first; second <= '9'; second++)
		{
			for (third = second; third <= '9'; third++)
				if (first != second && second != third)
				{
					putchar(first);
					putchar(second);
					putchar(third);
					if (first != '7')
					{
						putchar(',');
						putchar(' ');
					}
			}
		}
	}
	putchar('\n');
	return (0);
}
