#include "main.h"

/**
* print_binary - This function prints the binary representation of a number
* @n: the number to be converted to binary
* Return: void
*/
void print_binary(unsigned long int n)
{
	unsigned int binary = 1;
	int a = 0;

	while (binary <= n)
	{
		binary = binary << 1;
	}
	binary = binary >> 1;
	if (binary == 0)
		_putchar('0');
	while (binary > 0)
	{
		a = n & binary;
		if (a > 0)
			_putchar('1');
		else
			_putchar('0');
		binary = binary >> 1;
	}
}
