#include <stdio.h>
#include <stdlib.h>

/* This prints all single digit numbers of base 10 from 0 without using char */

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int a = 0;
	
	for (a = 0; a < 10; a++)
		putchar(a + '0');
	putchar("\n");
return (0);
}
