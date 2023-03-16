#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _calloc - This function allocates memory for an array using malloc
 * @nmemb: an integer
 * @size: an integer showing size of the array
 * Return: NULL or pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a;
	char *newarray;

	if (nmemb == 0 || size == 0)
		return (NULL);
	newarray = malloc(nmemb * size);
	if (newarray == NULL)
		return (NULL);
	/* To set the memory to zero(0) */
	for (a = 0; a < nmemb * size; a++)
		newarray[a] = 0;
	return (newarray);
}
