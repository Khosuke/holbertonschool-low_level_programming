#include <stdio.h>

/**
 * main - Prints all arguments passed to it
 * @argc: number of arguments
 * @argv: arguments names
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
		printf("\n");
	}
	return (0);
}
