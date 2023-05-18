#include "lists.h"

/**
* add_dnodeint_end - This function adds a new node to the end of a list
* @head: a pointer to the pointer that contains the address of the first node
* @n: the data of the node to be added to the end of the list
* Return: address of the new element or NULL if failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end, *new_node;

	if (head == NULL)
		return (NULL);

	end = *head;

	while (end != NULL && end->next != NULL)
	{
		end = end->next;
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (end != NULL)
	{
		new_node->prev = end;
		end->next = new_node;
	}
	else
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	return (new_node);
}
