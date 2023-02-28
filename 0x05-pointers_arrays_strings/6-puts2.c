#include "main.h"
/**
 * puts2 - This function prints every other character of a string,
 * starting with the first character
 * @str: The string to be printed
 * Return: void
 */
void puts2(char *str)
{
	int j = 0;

	while (*(str + j) != '\0')
	{
		if ((j % 2) == 0)
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
