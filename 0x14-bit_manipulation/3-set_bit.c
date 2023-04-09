#include "main.h"

/**
* set_bit - This function sets the value od a bit to 1 at a given index
* @n: a pointer to the number whose bit value would be changed
* @index: the bit position to be changed
* Return: 1 or -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	/*unsigned long int bit;*/

	if (index > 128)
		return (-1);
	*n |= (1 << index);
	return (1);
}
