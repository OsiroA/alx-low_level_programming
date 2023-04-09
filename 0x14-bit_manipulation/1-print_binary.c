#include "main.h"

/**
* print_binary - This function prints the binary representation of a number
* @n: the number to be converted to binary
* Return: void
*/
void print_binary(unsigned long int n)
{
	int a = 0;
	unsigned long int base;

	base = 1UL << (sizeof(unsigned long int) * 8 - 1);
	/**
	*if (base == 0)
	*	_putchar('0');
	*while (base <= n)
	*{
	*	base = base << 1;
	*}
	*base = base >> 1;
	*/
	while (base > 0)
	{
		/* a = n & base;*/
		if ((n & base) == 0)
		{
			if (a)
			{
				_putchar('0');
			}
		}
		else
		{
			_putchar('1');
			a = 1;
		}
		base = base >> 1;
	}
	if (!a)
		_putchar('0');
}
