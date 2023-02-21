#include "main.h"
/* This program prints the alphabet in lowercase, followed by a new line */

/** 
 * main - Entry point
 *
 * Return: 0 (Always Success)
 */
void print_alphabet(void)
{
	char a = 'a'
	char z = 'z'

	if (a <= z)
	{
		_putchar('a');
		a++;
	}
	_putchar('\n');
	return (0);
}
