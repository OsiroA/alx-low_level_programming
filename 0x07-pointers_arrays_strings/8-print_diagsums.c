#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - This function prints the sum
 * of the two diagonals of a square matrix of integers
 * @a: an array
 * @size: an integer
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int b;
	int mr = 0;
	int mc = 0;
	int r = size * size;

	for (b = 0; b < r; b += size + 1)
	{
		mr = mr + a[b];
	}
	for (b = size - 1; b < r - 1; b = b + size - 1)
	{
		mc = mc + a[b];
	}
	printf("%d, %d\n", mr, mc);
}
