#include "main.h"
#include <stdio.h>

/**
 * print_array - print a number of element of an array
 * @a: array to use
 * @n: number of element we want to print
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
