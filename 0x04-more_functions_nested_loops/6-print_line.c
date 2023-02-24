#include "main.h"

/**
 * print_line - This function prints a straight line
 * @n: an integer
 * Return: 0
 */

void print_line(int n)
{
	if (n < 1)
	{
		_putchar ('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
			_putchar('_');
	}
	_putchar ('\n');

	return (0);
}
