#include <stdio.h>
#include "lists.h"
/**
 * print_list - This function prints all the elements of a list_t list
 * @h: the singly linked list to be printed
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
		printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		a++;
		h = h->next;
	}
	return (a);
}
