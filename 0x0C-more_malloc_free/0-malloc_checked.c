#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * malloc_checked - This function allocates a memory using mmalloc
 * @b: an uncigned integer
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	double *g;

	g = malloc(b);
	if (!g)
		exit(98);
	return (g);
}
