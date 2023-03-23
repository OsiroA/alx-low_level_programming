#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - This function returns the sum of all its parameters
 * @n: the number of items in the list to be summed up
 * Return: sum or zero
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int a;
	int sum;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);

	sum = 0;
	for (a = 0; a < n; a++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
