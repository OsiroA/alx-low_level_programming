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
	int o = 0;
	int p = 0;

	while (dest[o] != '\0')
	{
		o++;
	}
	while (p < n && src[p] != '\0')
	{
		dest[o] = src[p];
		o++;
		p++;
	}
	dest[o] = '\0';
	return (dest);
}
