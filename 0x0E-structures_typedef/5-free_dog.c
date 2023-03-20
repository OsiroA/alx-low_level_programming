#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - This function frees dogs...
 * the one created in the previous task
 * @d: a pointer
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
