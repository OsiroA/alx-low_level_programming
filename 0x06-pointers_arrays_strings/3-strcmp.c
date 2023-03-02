#include "main.h"
/**
 * _strcmp - This function compares two strings
 * @s1: string one
 * @s2: second string
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int letter = 0;
	int PresenceOfDifference = 0;

	for (letter = 0; (s1[letter] != '\0' || s2[letter] != '\0'); letter++)
	{
		if (s1[letter] != s2[letter])
		{
			PresenceOfDifference++;
			return (s1[letter] - s2[letter]);
		}
	}
	return (0);
}
