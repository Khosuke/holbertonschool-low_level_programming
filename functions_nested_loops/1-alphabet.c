/**
 * print_alphabet - function that print a to z
 *
 * Return: 0 for success
 */
int print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
	return (0);
}
