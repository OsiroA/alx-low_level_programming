#include "lists.h"

/**
 * delete_dnodeint_at_index - This function deletes the node
 * at a given index in a linked list
 * @head: a pointer to the pointer to the first node
 * @index: the position whose node is being deleted
 * Return: 1 if success or -1 if failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;

	while (temp != NULL && count < index)
	{
		temp = temp->next;
		count++;
	}

	if (count == index)
	{
		if (temp->prev != NULL)
			temp->prev->next = temp->next;
		else
			*head = temp->next;

		if (temp->next != NULL)
			temp->next->prev = temp->prev;
		free(temp);
		return (1);
	}
	else
		return (-1);
}
