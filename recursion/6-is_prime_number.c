#include "main.h"

/**
 * is_prime - checks if a number is prime
 * @n: number we're searching 
 * @x: number to check 
 *
 * Return: itself until it find if number is prime or not
 */
int is_prime(int n, int x)
{
	if (n % x == 0)
	{
		return (0);
	}
	if (x * x > n)
	{
		return (1);
	}
	return (is_prime(n, x + 1));
}
/**
 * is_prime_number - check if a number is prime
 * @n: number to check
 *
 * Return: 1 if number 'n' is prime else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime(n, 2));
}

