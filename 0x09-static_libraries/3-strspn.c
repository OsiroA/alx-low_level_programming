#include "main.h"

/**
 * _strspn - This function gets the length of a prefix substring
 * that is present in another substring
 * @s: a string
 * @accept: a string
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	int m;
	int n;
	unsigned int length = 0;

	for (m = 0; s[m] != '\0'; m++)
	{
		for (n = 0; accept[n] != '\0' && accept[n] != s[m]; n++)
			;
		if (s[m] == accept[n])
			length++;
		if (accept[n] == '\0')
			return (length);
	}
	return (length);
}
