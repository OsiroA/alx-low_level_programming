#include <stdio.h>
#include "lists.h"
/**
 * print_list - This function prints all the elements of a list_t list
 * @h: the singly linked list to be printed
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t a;

	for (a = 0; h; a++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (a);
}
