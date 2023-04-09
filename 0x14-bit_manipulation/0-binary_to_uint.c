#include "main.h"
#include <stddef.h>
/**
* binary_to_uint - This function converts a binary number to an unsigned int
* @b: a pointer to a string of binary characters
* Return: The converted number or 0
*/
unsigned int binary_to_uint(const char *b)
{
	int a = 0;
	unsigned int decimal = 0;
	/*int eachnum;*/

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b == '0')
		{
			decimal <<= 1;
			a++;
		}
		else if (*b == '1')
		{
			decimal = (decimal << 1) | 1;
			a++;
		}
		else
		{
			return (0);
		}
		b++;
	}
	/**
	 * (b == NULL)
	*	return (0);
	*/
	if (a == 0)
	{
		return (0);
	}
	return (decimal);
}
