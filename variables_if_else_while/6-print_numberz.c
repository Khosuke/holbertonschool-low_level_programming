#include <stdio.h>

/**
 * main - print all numbers 0 to 9
 *
 * Return: 0 for success
 */
int main(void)
{
	int num;

	for (num = '0' ; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
