#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: an integer
 * Return: 0
 */

void print_diagonal(int n)
{
	if (n < 1)
	{
		_putchar ('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
			_putchar('\');
	}
	_putchar ('\n');
}
