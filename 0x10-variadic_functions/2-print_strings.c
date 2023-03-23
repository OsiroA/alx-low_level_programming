#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - This function prints strings followed by a new line
 * @separator: This is the string to be printed between the strings
 * @n: the number of strings passed into the function
 * Return: nil or string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int a;
	char *s;

	va_start(strings, n);
	for (a = 0; a < n; a++)
	{
		s = va_arg(strings, char *);
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", s);
		if (a + 1 < n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
