#include "lists.h"
#include <stdio.h>
/**
 * print_listint - This function prints all the elements of a lintint_t list
 * @h: pointer to the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;
	/* size_t n;*/

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
