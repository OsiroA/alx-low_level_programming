#include "main.h"
#include <stddef.h>
/**
* binary_to_uint - This function converts a binary number to an unsigned int
* @b: a pointer to a string of binary characters
* Return: The converted number or 0
*/
unsigned int binary_to_uint(const char *b)
{
	int count = 0;
	unsigned int decimal = 0;
	int eachnum;

	while (*b != '\0')
	{
		eachnum = *b - '0';
		if (eachnum != 0 && eachnum != 1)
			return (0);
		b++;
		count++;
	}
	b -= count;
	while (*b != '\0')
	{
		eachnum = *b - '0';
		decimal += eachnum * (1 << (count - 1));
		b++;
		count--;
	}
	return (decimal);
}
