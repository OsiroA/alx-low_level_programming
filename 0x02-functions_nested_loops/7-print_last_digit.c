#include "main.h"
/* This function prints the last digit of a number */
/**
 * print_last_digit - prints last digit of a number
 *
 * @r: an integer
 *
 * Return: Always 0
 */

int print_last_digit(int r)
{
	if (r >= 0 && r <= 9)
	{
		return (r);
	}
	else
	{
		return(print_last_digit(r));
	}
	return (0);
}
