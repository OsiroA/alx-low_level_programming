#include <stdlib.h>
#include "lists.h"
/**
 * list_len - This function returns the number of elements in a linked list
 * @h: The list to be printed
 * Return: number of elements in linked list
 */
size_t list_len(const list_t *h)
{
	size_t a = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			a++;
		h = h->next;
		}
	}
	return (a);
}
