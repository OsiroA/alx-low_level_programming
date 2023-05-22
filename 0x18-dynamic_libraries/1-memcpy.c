#include "main.h"

/**
 * _memcpy - This function copies memory area
 * @dest: a pointer
 * @src: a pointer
 * @n: an unsigned integer
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c = 0;

	while (c < n)
	{
		dest[c] = src[c];
		c++;
	}
	return (dest);
}
