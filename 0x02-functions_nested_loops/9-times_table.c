#include "main.h"
/* This function that prints th 9 times table, starting with 0 */
/**
 * times_table - this function prits the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int a, b, z, u, y, d;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			z = a * b;

			if (z > 9)
			{
				u = z % 10;
				d = (z-u) / 10;

				_putchar (',');
				_putchar (' ');
				_putchar (d + '0');
				_putchar (u + '0');
			}
			else
			{
				if (y != 8)
				{
					_putchar (',');
					_putchar (' ');
					_putchar (' ');
				}
				_putchar (z + '0');
			}
		}
		_putchar('\n');
	}
}
