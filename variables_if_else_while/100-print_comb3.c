#include <stdio.h>

/**
 * main - combinations of two single digits
 *
 * Return: 0 for success
 */
int main(void)
{
	int first, second;

	for (first = '0', second = '1'; first <= '9'; first++)
	{
		for (second = first; second <= '9'; second++)
		{
			if (first != second)
			{
				putchar(first);
				putchar(second);
				if (first != '8')
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
