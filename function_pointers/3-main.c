#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints result of operation asked by user
 * @argc: number of argument passed to the function, has to be 4
 * @argv: two numbers and an operator
 *
 * Return: 0 if execute perfectly
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2] == NULL))
		printf("Error\n");
		exit(99);
	printf("%d\n", (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
