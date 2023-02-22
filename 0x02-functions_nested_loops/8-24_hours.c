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
					if (!((H == 2) && (h > 3)))
						
						putchar ('0' + H);
						putchar ('0' + h);
						putchar (':');
						putchar ('0' + M);
						putchar ('0' + m);
						putchar ('\n');
				}
			}
		}
	}
}
