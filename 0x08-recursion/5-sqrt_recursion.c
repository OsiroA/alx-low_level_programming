#include "main.h"
/**
 * sqrt_helper - This is to help with the use of another variable
 * @n: integer to be evaluated
 * @m: possible square root of m
 * Return: square root or -1
 */
int sqrt_helper(int n, int m)
{
	if (n < 0)
		return (-1);
	if (m * m == n)
	{
		return (m);
	}
	else if (m != n)
	{
		return (sqrt_helper(n, m + 1));
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - This function returns the square root of a number
 * @n: an integer
 * Return: -1 or square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqrt_helper(n, 0));
}
