#include "main.h"

/**
 * print_chessboard - print a chessboard
 * @a: content and size of the chessboard
 * 
 * Return: nothing to return
 */
void print_chessboard(char (*a)[8])
{
	int row, column = 0;

	for (row = 0; a[row][column] != '\0'; row++)
	{
		for (column = 0; column < 8; column++)
		{
			_putchar(a[row][column]);
		}
		_putchar('\n');
	}
}
