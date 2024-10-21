#include <stdio.h>

/**
 * main - putchar a to z
 *
 * Return: 0 for success
 */
int main(void)
{
	char a;

	for (a = 'a' ; a <= 'z' ; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
