#include "main.h"
/* This program prints the alphabet in lowercase, followed by a new line */

/**
 * print_alphabet - prints alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	int f;

	for (f = 'a'; f <= 'z'; f++)
	{
	if (f <= 'z')
	{
		_putchar(f);
	}
	}
	_putchar('\n');
}
