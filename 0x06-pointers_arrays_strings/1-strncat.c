#include "main.h"
/**
 * _strncat - will concatenate two strings
 * @dest: a string
 * @src: another string
 * @n: an integer
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int eachLetter = 0;

	while (eachLetter < n && src[eachLetter] != '\0'; eachLetter++)

	{
		dest[eachLetter] = src[eachLetter];
	}
	for ( ; eachLetter < n; eachLetter++)
	{
		dest[eachLetter] = '\0';
	}
	return (dest);
}
