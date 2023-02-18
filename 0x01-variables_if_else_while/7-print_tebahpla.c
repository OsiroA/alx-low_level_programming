#include <stdio.h>
#include <stdlib.h>
/* This program prints the lowercase alphabet in reverse */

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');

return (0);
}
