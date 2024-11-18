#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints result of operation asked by user
 * 
 * Return: 
 */
int main(int argc, char* argv[])
{
	if (argc != 4 || get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		return (98);
	}
	if (atoi(argv[2]) == '%' && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		return (100);
	}
	if (atoi(argv[2]) == '/' && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		return (100);
	}
	printf("%d\n", (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
