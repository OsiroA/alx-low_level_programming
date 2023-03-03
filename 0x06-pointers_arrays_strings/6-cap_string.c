#include "main.h"
/**
 * cap_string - This function capitalizes the first letter 
 * of all the words in the string
 * @str - The string whose words are to be captitalized
 * Return: 0
 */
char *cap_string(char *str)
{
	int letter = 0;

	if (str[letter] >= 'a' && str[letter] <= 'z')
	{
		str[letter] = str[letter] - 32;
	}
	for (letter = 0; str[letter] != '\0'; letter++)
	{
		switch (str[letter])
		{
			case ' ':
			case '	':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				if (str[letter + 1] > 96 && str[letter + 1] < 123)
				{
					str[letter + 1] = str[letter + 1] - 32;
				}
		}
	}
	return (str);
}
