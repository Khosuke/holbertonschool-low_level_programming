#include "main.h"

/**
 * swap_int - Swaps the value of two integers
 * @a: first var to change
 * @b: second var to change
 */
void swap_int(int *a, int *b)
{
	int i = *a, j = *b;
	*a = j;
	*b = i;
}
