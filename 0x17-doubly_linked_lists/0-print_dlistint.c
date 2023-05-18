#include "lists.h"

/**
* print_dlistint - This function prints all
* the elements of a doubly-linked list
* @h: a pointer to the first node of the list
* Return: the number of nodes in the list
*/
size_t print_dlistint(const dlistint_t *h)
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
		printf("%d\n", temp->n);
		temp = temp->next;
		number++;
	}

	return (number);
}
