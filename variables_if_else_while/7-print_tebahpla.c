#include <stdio.h>

/**
 * main - alphabet in reverse
 *
 * Return: 0 for success
 */
int main(void)
{
	char reverse;

	for (reverse = 'z'; reverse >= 'a'; reverse--)
	{
		putchar(reverse);
	}
	putchar('\n');
	return (0);
}
