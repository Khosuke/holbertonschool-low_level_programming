#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers passed with a separator string
 * @separator: string of characters used as separator for numbers
 * @n: numbers of arguments passed to the functions
 *
 * Return: No return, void function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list ptr;

	va_start(ptr, n);
	while (i < n)
	{
		printf("%d", va_arg(ptr, int));
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(ptr);
}
