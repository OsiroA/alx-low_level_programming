#include "main.h"
/* This funtion computes the absolute valur of an integer */
/**
 * _abs - this function prints the absolute value
 *
 * @r: integer value
 *
 * Return: 0 (Success)
 */

int _abs(int r)
{
	if (r < 0)
	{
		r = r * -1;
		return (r);
	}
	else
	{
		return (r);
	}
	return (0);
}
