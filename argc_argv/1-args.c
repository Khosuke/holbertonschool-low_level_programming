#include <stdio.h>

/**
 * main - print the number of arguments passed to it
 * @argc: number of argument
 * @argv: arguments names
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc);
	return (0);
}
