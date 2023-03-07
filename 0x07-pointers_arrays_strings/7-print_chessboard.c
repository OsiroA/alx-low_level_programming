#include "main.h"
/**
 * print_chessboard - This function prints the chessboard
 * @a: a pointer to an array
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int b;
	int w;

	for (b = 0; b < 8; b++)
	{
		for (w = 0; w < 8; w++)
			_putchar (a[b][w]);
		_putchar ('\n');
	}
}
