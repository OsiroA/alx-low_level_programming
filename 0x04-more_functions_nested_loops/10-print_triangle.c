#include "main.h"

/**
 * print_triangle - This function prints a triangle followed by a new line
 * @size: an integer denoting the size of the triangle
 * Return: 0
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar ('\n');
	for (i = 1; i < size; i++)
	{
		for (j = 1; j < size; j++)
			_putchar ('#');
		_putchar ('\n');
	}
}
