#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sums of two diagonal of a square matrix
 * @a: square matrix
 * @size: size of the square
 *
 * Return: nothing to return
 */
void print_diagsums(int *a, int size)
{
	int i = 0, j = 0, sum1 = 0, sum2 = 0;

	while (i < size && j < size)
	{
		sum1 += *(a + (i * size + j));
		i++, j++;
	}
	j = 0;
	i = size - 1;
	while (i >= 0 && j < size)
	{
		sum2 += *(a + (i * size + j));
		i--, j++;
	}
	printf("%d, %d\n", sum1, sum2);
}
