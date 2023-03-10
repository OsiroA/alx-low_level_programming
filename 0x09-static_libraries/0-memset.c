#include "main.h"
/**
 * _memset - This function fills memory with a constant byte
 * @s: a pointer to a character
 * @b: a constant byte, i.e, size
 * @n: an unsigned int
 * Return: a pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
