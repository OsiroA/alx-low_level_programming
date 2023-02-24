#include "main.h"
/**
 * print_square - prints a square
 * @size: size of the square
 * Return: 0
 */

void print_square(int size)
{
	char c;

	for (c = 0; c < size; c++)
		_putchar('#');
	_putchar('\n');
}
