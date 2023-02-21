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
		_putchar(l[i]);
	}

	return (0);
}
