#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - Adds two positive numbers
 * @argc: numbers of arguments
 * @argv: positive numbers we want to add
 *
 * Return: 0 if execute perfectly, 1 for Error if argv contains symbols
 */
int main(int argc, char **argv)
{
	int i, j, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("%d\n", sum);
		return (0);
	}
}
