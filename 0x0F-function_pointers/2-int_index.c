#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - This function searches for an integer
 * @array: an array
 * @size: number of elements in the array array
 * @cmp: a pointer to the function to be used to compare values
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	/* Write a function that iterates through the array */

	int a;

	if (size <= 0)
		return (-1);
	if (array != NULL && size > 0 && cmp != NULL)
	{
		for (a = 0; a < size; a++)
		{
			if (cmp(array[a]) != 0)
				return (a);
		}
	}
	return (-1);
}
