#include <stdio.h>

/**
 * main - print alphabet lower and capital
 *
 * Return: 0 for success
 */
int main(void)
{
	char lower, upper;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}
	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		putchar(upper);
	}
	putchar('\n');
	return (0);
}
