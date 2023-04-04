#include <stdlib.h>
#include "lists.h"
/**
* delete_nodeint_at_index - This function deletes the node at index of a list
* @head: pointer to a pointer to the first node in the list
* @index: position of the node to be deleted
* Return: 1 or -1
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *newptr, *temporary;

	if (head == NULL || *head == NULL)
		return (-1);

	newptr = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(newptr);
		return (1);
	}
	while (a < index - 1)
	{
		if (newptr->next == NULL)
			return (-1);
		newptr = newptr->next;
		a++;
	}
	/**
	*if (a == index)
	*{
	*	a = (newptr)->n;
	*	*head = newptr->next;
	*	free(newptr);
	*}
	*else
	*	return (-1);
	*/
	temporary = newptr->next;
	if (temporary == NULL)
	{
		return (-1);
	}
	newptr->next = temporary->next;
	free(temporary);

	return (1);
}
