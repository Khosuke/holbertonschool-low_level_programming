#include "main.h"

/**
 * reverse_array - function to reverse content of an array
 * @a: the array to reverse
 * @n: number of element in the array
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
