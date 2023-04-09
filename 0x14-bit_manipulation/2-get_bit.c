#include "main.h"

/**
* get_bit - This function returns the value of a bit at a given index
* @n: the number to be checked
* @index: the index which starts from 0 of the bit you want to get
* Return: value of bit at index or -1
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int bitnumber;

	if (index > 32)
		return (-1);

	bitnumber = (n >> index) & 1;
	return (bitnumber);
}
