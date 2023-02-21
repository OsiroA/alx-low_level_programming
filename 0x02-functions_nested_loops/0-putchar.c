#include "main.h"

/* This program prints _putchar, followed by a new line */

/**
 * main -Entry point Print the word _putchar
 *
 *
 * return: 0 (Always)
 */

int main(void)
{
	char l[] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(l[i]);
	}
	_putchar('A');
	_putchar('n');
	_putchar('y');
	_putchar('t');
	_putchar('h');
	_putchar('i');
	_putchar('n');
	_putchar('g');
	_putchar('\n');

	return (0);
}
