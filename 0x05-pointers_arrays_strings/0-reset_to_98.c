#include "main.h"

/**
 * reset_to_98 - this function the value of an integer to 98
 * @*n: a pointer to an integer
 * Return: 0 (void)
 */
void reset_to_98(int *n)
{
	int a;

	a = 42;
	n = &a;
	_putchar('The value of a is: %d\n', a);
	reset_to_98(&a);
	_putchar('The updated value of a is: %d\n', a);
}
