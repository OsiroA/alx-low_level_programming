#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * string_nconcat - This function concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: length of s2 to be added to s1
 * Return: NULL or pointer to the newly concantenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int a, lenA;
	unsigned int b;
	char *newstring;

	lenA = 0;
	a = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* Get length of s1, n is length of s2 to be used */
	for (a = 0; s1[a] != '\0'; a++)
		lenA++;
	/* Allocate the memory for the new string */
	newstring = malloc(sizeof(char) * lenA + n + 1);
	/* 1 above is used to represent the terminating character */
	if (newstring == NULL)
		return (NULL);
	while (s1[a] != '\0')
	{
		newstring[a] = s1[a];
		a++;
	}
	while (b < n && s2[b] != '\0')
	{
		newstring[a] = s2[b];
		a++, b++;
	}
	newstring[a] = '\0';
	return (newstring);
}
