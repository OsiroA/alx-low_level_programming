#include "lists.h"

/**
* dlistint_len - This function returns the number of
* the elements of a doubly-linked list
* @h: a pointer to the first node of the list
* Return: the number of nodes in the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t number = 0;

	if (!h)
	{
		return (0);
	}

	temp = h;
	while (temp != NULL)
	{
		number++;
		temp = temp->next;
	}

	return (number);
}

