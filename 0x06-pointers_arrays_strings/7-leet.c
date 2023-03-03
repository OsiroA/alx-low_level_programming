#include "main.h"
/**
 * leet - This function replaces certain letters in the string with numbers
 * @p: input value
 * Return: 0
 */
char *leet(char *p)
{
	int letter;
	int number;

	char string1[] = "aAeEoOtTlL";
	char string2[] = "4433007711";

	for (letter = 0; p[letter] != '\0'; letter++)
	{
		for (number = 0; number < 10; number++)
		{
			if (p[letter] == string1[number])
			{
				p[letter] = string2[number];
			}
		}
	}
	return (p);
}
