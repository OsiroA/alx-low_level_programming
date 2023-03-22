#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - This function adds two integers
 * @a: the first integer
 * @b: the second integer
 * Return: integer
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - This function subtracts two integers
 * @a: the first integer
 * @b: the second integer
 * Return: int
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - This function multiplies two integers
 * @a: the first integer
 * @b: the second integer
 * Return: int
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - This function divides two integers
 * @a: the first integer
 * @b: the second integer
 * Return: int
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - This function divides two integers and returns the remainder
 * @a: the first integer
 * @b: the second integer
 * Return: int
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
