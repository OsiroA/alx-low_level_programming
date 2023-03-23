#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - This function prints anything
 * @format: a list of all types of arguments passed to the function
 * Return: nil or value
 */
/**
 * print_c - prints char
 * @list: the list of arguments
 * @s: separator
 * Return: void
 */
void print_c(va_list list, char *s)
{
	printf("%s%c", s, va_arg(list, int));
}
/**
 * print_i - prints int
 * @list: the list of arguments
 * @s: separator
 * Return: void
 */
void print_i(va_list list, char *s)
{
	printf(“%s%d”, s, va_arg(list, int);
}
/**
 * print_f - prints float
 * @list: the list of arguments
 * @s: separator
 * Return: void
 */
void print_f(va_list list, char *s)
{
	printf(“%s%f”, s, va_arg(list, double);
}
/**
 * print_s - prints char *
 * @list: the list of arguments
 * @sep: separator
 * Return: void
 */
void print_s(va_list list, char *sep)
{
	char *s;

	s = va_arg(list, char *)
	if (s == NULL)
		s = "(nil)";
	printf(“%s%s”, sep, s);
}
/**
 * print_all - This function prints anything
 * @format: a list of all types of arguments passed to the function
 * Return: nil or value
 */

void print_all(const char * const format, ...)
{
	va_list list;
	char *sep;
	int a, b;
	fm_t fmt[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};
	va_start(list, format);
	a = 0;
	sep = "";
	while (format != NULL && format[a] !='\0')
	{
		b = 0;
		while (j < 4)
		{
			if (format[a] == *(fmt[b]),fmt)
			{
				fmt[b].p(list, sep);
				sep = ", ";
			}
			b++;
		}
		a++;
	}
	printf("\n");
	va_end(list);
}
