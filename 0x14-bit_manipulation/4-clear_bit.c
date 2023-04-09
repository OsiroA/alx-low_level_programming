#include "main.h"

/**
* clear_bit - This function sets the value of a bit to 0 at a given index
* @n: pointer to the number whose value is to be changed
* @index: the bit position to be changed to 0
* Return: 1 or -1 if an error occurs
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* unsigned int bit;*/

	if (index > 128)
		return (-1);
	*n &= ~(1 << index);
	/* bit = (0 << index) | *n;*/
	return (1);
}
