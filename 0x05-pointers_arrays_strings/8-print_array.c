#include <stdio.h>
#include "main.h"
/**
 * print_array - This prints n elements of an array
 * @a: a pointer
 * @n: an integer
 * Return: void
 */
void print_array(int *a, int n)
{
	int f;

	for (f = 0; f < n; f++)
	{
		printf("%d", a[f]);
		if (f != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
