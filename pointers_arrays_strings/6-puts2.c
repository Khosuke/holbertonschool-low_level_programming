#include "main.h"

/**
 * puts2 - print every other character of a string
 * @str: string to print
 */
void puts2(char *str)
{
	int i, j = 0, size = -1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i > 0)
		{
			size = i;
		}
	}
	while (j <= size)
	{
		if (str[j] != '\0')
		{
			_putchar(str[j]);
		}
		j += 2;
	}
	_putchar('\n');
}
