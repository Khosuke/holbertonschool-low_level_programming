#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings with a separator inbetween strings
 * @separator: a string of characters used as separator
 * @n: numbers of arguments passed to the function
 *
 * Return: no return, void function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *str;
	va_list ptr;

	va_start(ptr, n);
	while (i < n)
	{
		str = va_arg(ptr, char*);
		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(ptr);
}
