#include "main.h"

/* This program prints _putchar, followed by a new line */

/**
 * main -Entry point
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
		_putchar('_');
		_putchar('p');
		_putchar('u');
		_putchar('t');
		_putchar('c');
		_putchar('h');
		_putchar('a');
		_putchar('r');
		_putchar('\n');
	}

	return (0);
}
