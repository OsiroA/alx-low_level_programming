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
	
	for (c = 'a'; c != 'q'; c != 'e'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');

return (0);
