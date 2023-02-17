#include <stdio.h>
/*This program prints the alphavbbet in lower case*/

/**
 *  * main - Entry point
 *   *
 *    * Return: 0 (Success)
 *     */

int main(void)
{
	char c;
	char d;
	
	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (d = 'A'; d <= 'Z'; d++)
		putchar(d);
		putchar('\n');
		
return (0);
}
