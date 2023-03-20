#include "dog.h"
#include <stddef.h>
/**
 * init_dog - Initializes a variable of type struct dog in header file
 * @d: a pointer to the struct
 * @name: name of the dog
 * @age: the age of the dog
 * @owner: owner of the dog
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
