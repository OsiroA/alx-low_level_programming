#include "main.h"
/**
 * _strncpy - This function copies a string
 * @dest: a string
 * @src: another string
 * @n: an integer
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int letter = 0;

	while (letter < n && src[letter] != '\0')
	{
		dest[letter] = src[letter];
		letter++;
	}
	while (letter < n)
	{
		dest[letter] = '\0';
		letter++;
	}
	return (dest);
}
