#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sum all numbers passed as arguments
 * @n: numbers of arguments passed
 *
 * Return: The sum of all numbers passed as arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int result = 0;
	va_list ptr;

	va_start(ptr, n);
	while (i < n)
	{
		i++;
		result += va_arg(ptr, int);
	}
	va_end(ptr);
	return (result);
}
