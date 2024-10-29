#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: string to print
 */
void print_rev(char *s)
{
	int i, j = 0, size = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		size = i;
	}
	while (size >= 0)
	{
		j = s[size];
		_putchar(j);
		size--;
	}
	_putchar('\n');
}
