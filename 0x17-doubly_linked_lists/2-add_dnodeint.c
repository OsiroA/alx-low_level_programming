#include "lists.h"

/**
* add_dnodeint - This function adds a new node at the beginning of a list
* @head: a pointer to the pointer of the first node of the list
* @n: the data to be added with the new node
* Return: the address of the new element or NULL if failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/*dlistint_t *temp;*/

	dlistint_t *new_node;

	if (head == NULL)
	{
		return (NULL);
	}
	/* *temp = *head;*/
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}
