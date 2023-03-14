#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * wordCounterRec - counts the number of words recursively
 * @str: pointer
 * @i: current index
 * Return: number of words
 */
int wordCounterRec(char *str, int i)
{
	if (str[i] == '\0')
		return (0);
	if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
		return (1 + wordCounterRec(str, i + 1));
	return (wordCounterRec(str, i + 1));
}
/**
 * word_counter - counts number of words in 1d array of strings
 * @str: pointer to char
 * Return: number of words
 */
int word_counter(char *str)
{
	if (str[0] != ' ')
		return (1 + wordCounterRec(str, 0));
	return (wordCounterRec(str, 0));
}
/**
 * strtow - This function prints a string into words
 * @str: a string
 * Return: NULL or pointer to an array of strings(words)
 */
char **strtow(char *str)
{
	int a, b, n;
	int length = 0;
	char **strcopy;

	/* Find the length of the entire string */
	for (a = 0; str[a] != '\0'; a++)
	{
		length++;
	}
	length++;

	/* Allocate space for the string */
	str = malloc(sizeof(char) * length);

	if (str == NULL || str == 0)
		return (NULL);
	for (a = 0; str[a] != '\0'; a++)
	{
		if (*str != ' ')
		{
			n = 0;
			while (str[n] != ' ')
				n++;
			strcopy = malloc(sizeof(char) * (n + 1));
			if (strcopy[a] == NULL)
			{
				while (--a >= 0)
					free(strcopy[--a]);
				free(strcopy);
				return (NULL);
			}
			b = 0;
			while (b < n)
			{
				strcopy[a][b] = *str;
				b++, str++;
			}
			strcopy[a][b] = '\0';
			a++;
		}
		str++;
	}
	strcopy[a] = '\0';
	return (strcopy);
}
