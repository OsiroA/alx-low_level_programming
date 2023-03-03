#include "main.h"
/**
 * string_toupper - This function converts all lowercase letters
 * in the string to uppercase
 * @ptr: a pointer
 * Return: ptr
 */
char *string_toupper(char *ptr)
{
	int letter = 0;

	while (ptr[letter] != '\0')
	{
		if (ptr[letter] >= 'a' && ptr[letter] <= 'z')
		{
			ptr[letter] = ptr[letter] - 32;
		}
		letter++;
	}
	return (ptr);
}
