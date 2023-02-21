#include "main.h"
/* This code prints the sign of a number */
/**
 * print_sign - prints the sign of a number
 *
 * @n: an integer
 *
 * Return 0, 1, or -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}

	return (0);
}
