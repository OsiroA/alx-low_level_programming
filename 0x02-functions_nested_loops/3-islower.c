#include "main.h"
/* This function checks for lowercase character*/
/**
 * _islower - Checks for lowercase characters
 *
 * @c: an integer
 *
 * Return: 0
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
