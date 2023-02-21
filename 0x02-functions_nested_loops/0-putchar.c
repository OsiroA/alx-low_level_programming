#include "main.h"

/* This program prints _putchar, followed by a new line */

/**
 * main - Entry point
 * 
 * return: 0 (Always)
 */

int main(void)
{
	char l[] = {main};
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(l[i]);
	}
	putchar("_putchar \n");
	return (0);
}
