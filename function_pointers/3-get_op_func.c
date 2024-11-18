#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_function - Select correct function to perform operation asked by user
 * @s: the operator chosen by user
 *
 * Return: pointer to function corresponding to the correct operator
 * or NULL if invalid operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i = 0;

	while (*ops[i].op != *s)
	{
		if (ops[i].op == NULL)
			return (NULL);
		i++;
	}
	return (ops[i].f);
}
