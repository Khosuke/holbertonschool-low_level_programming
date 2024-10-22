#include <stdio.h>

/**
 * main - print all single digit numbers
 *
 * Return : 0 for success
 */
int main(void)
{
	char digit;

	for (digit = '0'; digit <= 9; digit++)
	{
		putchar(digit);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
