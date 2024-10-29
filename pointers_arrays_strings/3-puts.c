#include "main.h"

/**
 * _puts - prints a string
 * @str: the string to print
 */
void _puts(char *str)
{
	int i = 0, j = 0;

	while (str[i] != '\0')
	{
		j = str[i];
		_putchar(j);
		i++;
	}
	_putchar('\n');
}
