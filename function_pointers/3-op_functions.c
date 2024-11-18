#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - add two numbers
 * @a: first number
 * @b: second number
 *
 * Return: The value of the sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract two numbers
 * @a: first number
 * @b: second number 
 *
 * Return: The value of the substraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two numbers
 * @a: first number
 * @b: second number
 *
 * Return: The result of the multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a number by another
 * @a: first number the dividend
 * @b: second number the divisor
 *
 * Return: The result of the division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Operate modulo
 * @a: first number the dividend
 * @b: second number the divisor
 *
 * Return: remainder of dividing a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
