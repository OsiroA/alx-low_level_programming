#include "main.h"

/**
 * _isdigit - Used to check if a digit is betwen 0 and 9
 * @c: an integer
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
