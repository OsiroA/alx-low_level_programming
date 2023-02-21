#include "main.h"

/*This program prints 10 times the alphabets*/
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;
	int a;

	for (a = 0; a <= 9; a++)
	{
	for (i = 'a'; i <= 'z'; i++)
	{
		if (i <= 'z')
			_putchar(i);
	}
	}
	_putchar('\n');
}
