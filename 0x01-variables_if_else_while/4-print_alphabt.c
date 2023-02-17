#include <stdio.h>
/*This program prints the alphabet in lower case except q and e*/

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	if ((c != 'e') && (c != 'q'))
	{
		putchar(c);
	}
	putchar('\n');

return (0);
}
