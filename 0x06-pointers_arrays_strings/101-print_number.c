#include "main.h"
/**
 * print_number - This function prints an integer
 * @n: an integer
 * Return: void
 */
void print_number(int n)
{
	unsigned int number;

	if (n >= 0 && n < 10)
	{
		_putchar('0' + n);
		return;
	}
	if (n < 0)
	{
		number = -n;
		_putchar('-');
	}
	else
	{
		number = n;
	}
	if (number >= 10)
	{
		print_number(number / 10);
	}
	_putchar('0' + (number % 10));
}
