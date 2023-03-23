#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - This function prints numbers followed by a new line
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: integer or error
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int a;

	va_start(numbers, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(numbers, int));
		if (a + 1 < n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
