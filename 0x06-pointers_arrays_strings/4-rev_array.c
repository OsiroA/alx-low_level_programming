#include "main.h"
/**
 * reverse_array - This program prints the contents of an array in reverse
 * @a: a pointer to an integer
 * @n: an integer
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int letter = 0;
	int length = 0;
	int placeholder;

	while (*a != '\0')
	{
		a++;
		length++;
	}
	for (letter = 0; letter < n--; letter++)
	{
		placeholder = a[letter];
		a[letter] = a[n];
		a[n] = placeholder;
	}
}
