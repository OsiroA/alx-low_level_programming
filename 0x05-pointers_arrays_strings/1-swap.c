#include "main.h"
/**
 * swap_int - This function swaps integers
 * @a: an integer
 * @b: an integer
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
