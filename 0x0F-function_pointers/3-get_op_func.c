#include <string.h>
#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>
/**
 * get_op_func - This function selects the function to perform
 * as requested by the user
 * @s: operator passed as argument to the program
 * Return: a pointer to the corresponding function with operator given
 * or Error
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL},
	};
	int i = 0;

	while (i != 5)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
	i++;
	}

	return (NULL);
}
