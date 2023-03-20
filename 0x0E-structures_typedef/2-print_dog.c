#include "dog.h"
#include <stdio.h>
/**
 * print_dog - This function prints a struct dog
 * @d: a pointer
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("(nil)");
		return;
	}
	if (d->name == NULL)
		printf("Name: (nil)\n");
	if (d->age == NULL)
		printf("Age: (nil)\n");
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Name: %s\nAge: %g\nOwner: %s\n", d->name, d->age, d->owner);
}
