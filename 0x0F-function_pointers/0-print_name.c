#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - This function prints a name
 * @name: The name to be printed
 * @f: a pointer to a function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	else
		f(name);
}
