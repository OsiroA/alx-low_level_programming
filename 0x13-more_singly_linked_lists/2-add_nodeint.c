#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - This function adds a new node at the beginning of the list
 * @head: a pointer to the first node in the list
 * @n: the integer to be added to the new node
 * Return: address of the new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	if (head == NULL)
		return (NULL);
	newnode = *head;
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
