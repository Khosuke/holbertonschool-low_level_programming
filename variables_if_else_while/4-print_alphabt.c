#include <stdio.h>

/**
 * main - alphabet skip e and q
 *
 * Return: 0 for success
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z' && alpha != 'e' && alpha != 'q' ; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
