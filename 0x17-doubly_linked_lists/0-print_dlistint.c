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
	size_t number = 1;

	if (!h)
	{
		return (0);
	}
	else if (h->next == NULL || h->next == 0)
	{
		return (0);
	}
	temp = h;
	while (temp->next != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		number++;
	}

	if (temp->next == NULL)
	{
		printf("%d\n", temp->n);
		/*number++;*/
	}
	return (number);
}
