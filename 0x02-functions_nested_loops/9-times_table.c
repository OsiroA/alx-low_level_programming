#include "main.h"
/* This function that prints th 9 times table, starting with 0 */
/**
 * times_table - this function prits the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int a, b, z;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10, b++)
		{
			z = a * b;

			if (b == 0)
			{
				_putchar (z + '0');
			}

			if (z < 10 && b != 0)
			{
				_putchar (',');
				_putchar (' ');
				_putchar (' ');
				_putchar (z + '0');
			}
			else if (z > 10)
			{
				_putchar (',');
				_putchar (' ');
				_putchar ((k / 10) + '0');
				_putchar (k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
