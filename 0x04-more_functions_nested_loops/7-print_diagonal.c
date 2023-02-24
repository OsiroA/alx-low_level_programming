#include "main.h"

/**
 * print_diagnal - draws a diagonal line on the terminal
 * @n: an integer
 * Return: 0
 */

void print_diagonal(int n)
{
	char c;

	for (c = 0; c < n; c++)
		_putchar('\');
	_putchar('\n');
}
