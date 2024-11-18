#include "function_pointers.h"
#include <stdio.h>


/**
 * print_name - points to another function to print name
 * @name: the name we want to print
 * @f: pointer to function
 *
 * Return: no return, void function
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
