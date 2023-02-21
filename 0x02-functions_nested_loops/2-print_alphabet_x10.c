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

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i <= 'z')
			_putchar(10*i);
	}
	_putchar('\n');
}
