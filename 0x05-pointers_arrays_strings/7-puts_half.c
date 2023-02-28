#include "main.h"
/**
 * puts_half - This function prints the second half of a string
 * @str: a string
 * Return: void
 */
void puts_half(char *str)
{
	int j = 0;
	int len = 0;
	char *s = str;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	if ((len % 2) == 0)
	{
		j = len / 2;
	}
	else
	{
		j = (len + 1) / 2;	
	}
	for ( ; j < len ; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
