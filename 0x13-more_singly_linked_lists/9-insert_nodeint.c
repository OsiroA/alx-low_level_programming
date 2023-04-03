#include <stdlib.h>
#include "lists.h"
/**
* insert_nodeint_at_index - This function inserts a new node at a
* given position
* @head: a pointer to the pointer to the first node
* @idx: the position to add the new node
* @n: the data to be added to the new node
* Return: address of the new node or NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int index = 0;
	listint_t *newptr, *newnode;

	newnode = malloc(sizeof(listint_t));
	/*newnode->n = n; */
	/*newnode->next = NULL; */
	newptr = *head;
	if (newnode == NULL)
		return (NULL);
	/*newnode->n =n;*/
	/*if (idx == 0)*/
	/*{*/
	/*	newnode->next = *head;*/
	/*	*head = newnode;*/
	/*	return (*head);*/
	/*}*/
	/*	newnode->next = newptr;*/
	while (newptr != NULL && index < idx - 1)
	{
		newptr = newptr->next;
		index++;
	}
	/*else if (index == idx)*/
	/*{*/
	/*	newnode->next = newptr->next;*/
	/*	newptr->next = newnode;*/
	/*}*/
	if (newptr == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->next = newptr->next;
	newptr->next = newnode;
	return (newnode);
}
