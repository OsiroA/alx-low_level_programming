#include "main.h"

/**
 * _isupper - This function checks if a character is a capital letter
 * main - checks if code works
 * @c: used as a variable
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
