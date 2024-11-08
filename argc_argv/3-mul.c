#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * @argc: numbers of arguments, has to be 3
 * @argv: the numbers we want to multiply
 *
 * Return: 0 if it has two valid numbers else 1 for Error
 */
int main(int argc, char **argv)
{

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
