#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - This function executes a function given as a parameter
 * on each element of the array
 * @array: an array
 * @size: integer showing size of the array
 * @action: pointer to the function I need to use
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (a = 0; a < size; a++)
			action(array[a]);
	}
}
