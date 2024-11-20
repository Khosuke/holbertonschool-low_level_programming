#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_char(va_list ap);
void print_int(va_list ap);
void print_float(va_list ap);
void print_str(va_list ap);
void print_all(const char * const format, ...);

/**
 * struct form - Structure of format specifier
 * @types: the data type specifier
 * @f: pointer to function of the corresponding print data type
 * Description: used to print an argument
 * with it's correct type specified
 */
typedef struct form
{
	char *types;
	void (*f)(va_list);
} form_t;

#endif
