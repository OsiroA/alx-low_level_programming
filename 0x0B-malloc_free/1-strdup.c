#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _strdup - This function returns a pointer to a newly allocated space in
 *  memory, which contains a copy of the string given as a parameter
 * @str: The string given as parameter
 * Return: strcopy or NULL
 */
char *_strdup(char *str)
{
	char *strcopy;
	int i;
	int len;

	/* I want to get the length of str to allocate space to its duplicate*/
	for (len = 0; str[len] != '\0'; len++)
		;
	strcopy = malloc(sizeof(char) * (len + 1)); 
	if (str == NULL)
		return (NULL);
	/* This part is to copy str into the new string strcopy */
	while (i <= len)
	{
		strcopy[i] = str[i];
		i++;
	}
	return (strcopy);
}
