#include "main.h"
#include <stdlib.h>
/* This program prints natural nummbers till 98 */
/**
 * print_to_98 - prints all natural numbers tll 98
 *
 * @n: an integer
 *
 * Return: n
 */

void print_to_98(int n)
{
	for (n = 0; n < 99; n++)
	{
		_putchar (n);
	}
	return (n);
}
