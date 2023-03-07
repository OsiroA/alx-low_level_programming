#include "main.h"
/**
 * _strstr - This function locates a substring
 * @haystack: a string
 * @needle: a string
 * Return: pointer to the substring or null
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*h)
	{
		n = needle;
		h = haystack;
		while (*n)
		{
			if (*h == *n)
			{
				h++;
				n++;
			}
			else
				break;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return ('\0');
}
