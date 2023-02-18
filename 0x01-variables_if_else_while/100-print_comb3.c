#include <stdio.h>
/* This program prints all possible different combination of two digits */
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int tens;
	int ones;

	for (tens = 0; tens <= 9; tens++)
	{
	for (ones = 0; ones <= 9; ones++)
	{
		putchar(tens);
		putchar(ones);

		if (!(tens == 9) && (ones == 9))
		{
			putchar(',');
			putchar(' ');
		}
	}
	}
	putchar('\n');
return (0);
}
