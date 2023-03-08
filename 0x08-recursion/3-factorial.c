#include "main.h"
/**
 * factorial - This function returns the factorial of a number
 * @n: an integer
 * Return: an integer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
