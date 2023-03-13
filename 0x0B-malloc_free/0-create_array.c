#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - This function creates an array of chars
 * and initializes it with a specific char
 * @size: an integer
 * @c: a specific char
 * Return: Null or pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size); /*Named the array of chars array*/
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
