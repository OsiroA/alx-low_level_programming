#include "main.h"
/**
 * _strlen - This function returns the length of a string
 * @s: a character
 * Return: 0
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
