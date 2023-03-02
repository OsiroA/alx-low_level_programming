#include "main.h"
/**
 * reverse_array - This program prints the contents of an array in reverse
 * @a: an array of integers
 * @n: number of integers in the array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int letter;
	int placeholder;

	for (letter = 0; letter < n--; letter++)
	{
		placeholder = a[letter];
		a[letter] = a[n];
		a[n] = placeholder;
	}
}
