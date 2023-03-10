#include "main.h"
/* This function checks for alphabetic character */
/**
 * _isalpha - This checks for alphabetic characters
 *
 * @c: an integer
 *
 * Return: 0 or 1
 */

int _isalpha(int c)
{
	if (c  >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
