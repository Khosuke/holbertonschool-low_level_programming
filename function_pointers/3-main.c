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
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", (*get_op_func(argv[2]))(num1, num2));
	return (0);
}
