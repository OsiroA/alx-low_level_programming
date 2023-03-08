#include "main.h"

/**
 * _strlen - finds length of string
 * @s: string to be parsed through
 *
 * Return: length of string, excluding null terminator
 */
int _strlen(char *s)
{
	if (!*s)
		return (0);
	else
		return (1 + _strlen(s + 1));
}

/**
* palindrome_helper - helper function to determine palindrome
* @s: string to be checked as a palindrome
* @len: length of string
* @i: iteration variable, tracking distance from s
*
* Return: 1 if string is palindrome, 0 if not
*/
int palindrome_helper(char *s, int len, int i)
{
	if (_strlen(s) == 0)
		return (0);

	if (*(s + i) != *(s + len - 1))
		return (0);
	else if (i > (len - 1))
		return (1);
	else
		return (palindrome_helper(s, len - 1, i + 1));
	}

/**
* is_palindrome - determines if a string is a palindrome
* @s: string to be checked
*
* Return: 1 if string is a palindrome, 0 if not
*/
int is_palindrome(char *s)
{
	return (palindrome_helper(s, _strlen(s), 0));
}
