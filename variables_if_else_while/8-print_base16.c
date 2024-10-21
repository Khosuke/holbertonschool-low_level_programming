#include <stdio.h>

/**
 * main - print hexadecimal characters
 *
 * Return: 0 for success
 */
int main(void)
{
	int digit;
	char hexa;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}
	for (hexa = 'a'; hexa <= 'f'; hexa++)
	{
		putchar(hexa);
	}
	putchar('\n');
	return (0);
}
