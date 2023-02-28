#include "main.h"
/**
 * _strcpy - This function copies the string pointed to by src,
 * ncluding the terminating null byte (\0), to the buffer pointed
 * to by dest
 * @dest: a pointer
 * @src: a pointer
 * Return: *dest
 */
char *_strcpy(char *dest, char *src)
{
	int y = 0;
	int z = 0;

	while (*(src + y) != '\0')
	{
		y++;
	}
	for ( ; z < y ; z++)
	{
		dest[z] = src[z];
	}
	dest[y] = '\0';
	return (dest);
}
