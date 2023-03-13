#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * str_concat - This function concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * Return: NULL or a pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *joinedString;
	int a, b;

	a = 0;
	b = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/**
	 * I have to get the length of the strings to get
	 * the size of new string
	 */
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;

	/* get the new string */
	joinedString = malloc(sizeof(char) * (a + b + 1));
	/* 1 is added as the terminating null string */
	if (joinedString == NULL)
		return (NULL);
	/* add s1 to the new string */
	for (a = 0; s1[a] != '\0'; a++)
	{
		joinedString[a] = s1[a];
	}
	/* add s2 to the new string too */
	for (b = 0; s2[b] != '\0'; b++)
	{
		joinedString[a] = s2[b];
		a++;
	}
	joinedString[a] = '\0';
	return (joinedString);
}
