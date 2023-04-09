#include "main.h"

/**
* flip_bits - This function returns the number of bits you would need to
* flip to get from one number to another
* @n: the number to be flipped
* @m: the number to be flipped to
* Return: count
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int swap;
	int count;

	swap = n ^ m;
	count = 0;

	while (swap)
	{
		count = (swap & 1) + count;
		swap >>= 1;
	}
	return (count);
}
