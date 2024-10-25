#include "main.h"

/**
 * print_times_table - print the table of a number
 * @n: number to print the table of 
 *
 * Return : 0 for success
 */
void print_times_table(int n)
{
	int idx1, idx2, rslt;

	if (n <= 15 && n >= 0) {
		for (idx1 = 0; idx1 <= n; idx1++)
		{
			for (idx2 = 0; idx2 <= n; idx2++)
			{
				rslt = idx1 * idx2;
				if (rslt > 99) {
					_putchar((rslt / 100) + '0'); /* Print the first character of a three digit number */
				}
				else if (idx2 > 0) {
					_putchar(' ');
				}
				if (rslt > 9) {
					_putchar(((rslt % 100) / 10 ) + '0'); /* Print the second character of a three digit number */
				}
				else if (idx2 > 0) {
					_putchar(' ');
				}
				_putchar((rslt % 10) + '0'); /* Print the third character of a three digit number */ 
				if (idx2 < n) {
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
