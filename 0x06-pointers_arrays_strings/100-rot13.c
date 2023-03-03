#include "main.h"
/**
 * rot13 - encodes a string using rot13,
 * i.e., it rotates the specified letter by 13 places
 * @p: string to be encoded
 * Return: 0
 */
char *rot13(char *p)
{
	char string1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char string2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int normalLetter;
	int rot13Letter;

	for (normalLetter = 0; p[normalLetter] != '\0'; normalLetter++)
	{
		for (rot13Letter = 0; string1[rot13Letter] != '\0'; rot13Letter++)
		{
			if (p[normalLetter] == string1[rot13Letter])
			{
				p[normalLetter] = string2[rot13Letter];
				break;
			}
		}
	}
	return (p);
}
