#include "main.h"
/* This program prints the alphabet in lowercase, followed by a new line */

/**
 * main - Entry point
 *
 * print_alphabet() - prints alphabet in lowercase
 *
 * Return: 0 (Always Success)
 */
void print_alphabet(void)
{
	char a = 'a';
	char z = 'z';

	if (a <= z)
	{
		_putchar(a, a++);
	}
	print_alphabet();
	_putchar('\n');
}
