#include "lists.h"
/**
 * listint_len - This function returns the number of elements in a linked list
 * @h: the pointer to the list
 * Return: number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
