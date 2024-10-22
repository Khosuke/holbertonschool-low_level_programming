#include <stdio.h>

/**
 * main - print single digit
 *
 * Return: 0 for success
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar("%c",i);
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
