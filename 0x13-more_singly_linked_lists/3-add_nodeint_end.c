#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - This function adds a new node at the end of the list
 * @head: a pointer to the first node
 * @n: the data to be in the new node
 * Return: address of the new node or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *currentpointer;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
		*head = newnode;
	else
	{
		currentpointer = *head;
		while (currentpointer->next != NULL)
		{
			currentpointer = currentpointer->next;
		}
		currentpointer->next = newnode;
	}
	return (newnode);
}

