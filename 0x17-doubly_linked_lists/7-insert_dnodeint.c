#include "lists.h"

/**
* insert_dnodeint_at_index - This function inserts a new node
* at the specified index in a linked list
* @h: The pointer to the pointer of the first node in the list
* @idx: the position to add the node
* @n: The data to be added with the new node
* Return: the address of the new node or NULL if the node does not exist
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *newNode;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);

	temp = *h;
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (temp != NULL && count < idx - 1)
	{
		temp = temp->next;
		count++;
	}
	if (count == idx - 1)
	{
		if (temp == NULL)
			return (NULL);

		newNode = malloc(sizeof(dlistint_t));
		if (newNode == NULL)
			return (NULL);

		newNode->n = n;
		newNode->prev = temp;
		newNode->next = temp->next;

		if (temp->next != NULL)
			temp->next->prev = newNode;

		temp->next = newNode;

		return (newNode);
	}
	else
	{
		return (NULL);
	}
}
