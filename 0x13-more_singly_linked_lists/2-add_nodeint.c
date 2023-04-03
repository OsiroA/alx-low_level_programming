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

	newnode = malloc(sizeof(listint_t));
	newnode->n = n;
	newnode->next = NULL;

	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
