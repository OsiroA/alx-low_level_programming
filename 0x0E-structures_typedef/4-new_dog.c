#include "dog.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - This function creates a new dog
 * @name: The name of the dog
 * @age: the age of the dog
 * @owner: the name of the owner of the dog
 * Return: NULL or 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int namelength = 0, ownerlength = 0, a;

	newDog = (dog_t *)malloc(sizeof(dog_t));
	if (newDog == NULL)
	{
		return (NULL);
	}
	namelength = strlen(name);
	ownerlength = strlen(owner);
	newDog->name = malloc(namelength * sizeof(newDog->name));

	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	/* make a copy of name and owner */
	for (a = 0; a < namelength; a++)
	{
		newDog->name[a] = name[a];
	}
	newDog->age = age;
	newDog->owner = malloc(ownerlength * sizeof(newDog->owner));
	if (newDog->owner == NULL)
	{
		free(newDog);
		return (NULL);
	}
	for (a = 0; a < ownerlength; a++)
	{
		newDog->owner[a] = owner[a];
	}
	return (newDog);

}
