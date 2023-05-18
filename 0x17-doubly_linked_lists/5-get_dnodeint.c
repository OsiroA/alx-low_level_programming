#include "lists.h"

/**
* get_dnodeint_at_index - This function returns the nth node ofr a linked list
* @head: The pointer to the first node n the list
* @index: the nth node to be returned
* Return: the nth node or NULL if the node does not exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count = 0;

	temp = head;

	while (temp != NULL && count < index)
	{
		temp = temp->next;
		count++;
	}

	if (count == index)
	{
		return (temp);
	}
	else
		return (NULL);
}
