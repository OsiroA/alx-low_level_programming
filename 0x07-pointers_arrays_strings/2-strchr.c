#include "main.h"

/*
 * _strchr - This function locates a character in a string
 * @s: a pointer to a string
 * @c: the letter we want to search for
 * Return: first occurrence of 'c' or NULL
 */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
