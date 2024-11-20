#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - print a char
 * @ap: the list of args
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - print a int
 * @ap: the list of args
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - print a float
 * @ap: the list of args
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_str - print a string
 * @ap: the list of args
 */
void print_str(va_list ap)
{
	char *str = va_arg(ap, char*);

	if (str == NULL)
	{
		str = "(nil)";
	}
	printf("%s", str);
}

/**
 * print_all - print anything
 * @format: list of types of arguments passed
 *
 * Return: no return, void function
 */
void print_all(const char * const format, ...)
{
	form_t t_arg[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	};
	unsigned int i = 0, j = 0;
	char *separator = "";
	va_list ptr;

	va_start(ptr, format);
	while (format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *t_arg[j].types || format[i] == *t_arg[j].types ||
			format[i] == *t_arg[j].types || format[i] == *t_arg[j].types)
			{
				printf("%s", separator);
				(t_arg[j].f)(ptr);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ptr);
}
