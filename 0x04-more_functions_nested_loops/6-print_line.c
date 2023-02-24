#include "main.h"

/**
 * print_line - This function prints a straight line
 * @n: an integer
 * Return: 0
 */

void print_line(int n)
{
	char c;

	for (c = 0; c < n; c++)
		_putchar('_');
	_putchar('\n');
}
