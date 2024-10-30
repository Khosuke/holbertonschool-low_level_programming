#include "main.h"

/**
 * puts_half - prints last half of string
 * @str: string to print
 */
void puts_half(char *str)
{
	int i, size, n;

	for (i = 0; str[i] != '\0'; i++)
	{
		size = i;
	}
	size = i - 1;
	if (size % 2 == 0)
	{
		n = ((size) / 2) + 1;
	}
	else
	{
		n = ((size - 1) / 2) + 1;
	}
	while (n <= size)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
