#include <stdio.h>

/**
 * main -
 *
 *
 */
int main(void)
{
	unsigned long num1 = 0, num2 = 1, new, i;

	for (i = 0; i <= 50; i++)
	{
		new = num1 + num2;
		num1 = num2;
		num2 = new;
		printf("%ld, ", new);
	}
	printf("\n");
	return (0);
}
