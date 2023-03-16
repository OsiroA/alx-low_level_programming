#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _realloc - This function reallocates a memory block using malloc and free
 * @ptr: old memory block
 * @old_size: the size of ptr
 * @new_size: the size of the new memory block we want to create
 * Return: NULL or pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int a = 0;
	unsigned char *newmemory;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		/*Doing the next line because of condition 8 in the question */
		ptr = malloc(sizeof(void *) * new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	newmemory = malloc(sizeof(char) * new_size);
	if (newmemory == NULL)
		return (NULL);
	if (new_size > old_size)
	{
		while (a < old_size)
		{
			newmemory[a] = ((char *)ptr)[a];
			a++;
		}
		free(ptr);
	}
	return (newmemory);
}
