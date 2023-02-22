#include "main.h"
/* This function prints every minute of the day from 00:00 to 23:59 */
/**
 * jack_bauer - prints every minute of the day of jack bauer
 *
 * Return: void
 */

void jack_bauer(void)
{
	int H, h, M, m;

	for (H = 0; H <= 2; H++)
	{
		for (h = 0; h <= 3; h++)
		{
			for (M = 0; M <= 5; M++)
			{
				for (m = 0; m <= 9; m++)
				{
					_putchar ('0' + H);
					_putchar ('0' + h);
					_putchar (':');
					_putchar ('0' + M);
					_putchar ('0' + m);
					_putchar ('\n');
				}
			}
		}
	}
}
