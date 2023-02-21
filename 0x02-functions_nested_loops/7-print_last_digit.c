#include "main.h"
/* This function prints the last digit of a number */
/**
 * print_last_digit - prints last digit of a number
 *
 * @r: an integer
 *
 * Return: last digit
 */

int print_last_digit(int r)
{
	r = r % 10;
	if (r < 0)
	{
		r = r * -1;
		_putchar ('0' + r);
	}
	else
	{
		return ('0' + r);
	}

return (r);
}
