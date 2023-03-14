#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * argstostr - This function concatenates all the arguments of your program
 * @ac: an integer
 * @av: a pointer
 * Return: Null or a pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int a;
	int b;
	int c;
	int length = 0;
	char *strcopy;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* To determine the length of each characters */
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
			length++;
		length++; /* to add the space for the null byte */
	}
	length++;
	/* Allocate the memory for the length and new line for each word */
	strcopy = malloc(sizeof(char) * length);
	if (strcopy == NULL)
		return (NULL);
	c = 0;
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			strcopy[c++] = av[a][b];
		}
		strcopy[c++] = '\n';
	}
	strcopy[c] = '\0';
	return (strcopy);
}
