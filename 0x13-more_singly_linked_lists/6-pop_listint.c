#include "lists.h"
#include <stdlib.h>
/**
* pop_listint - This function deleted the head node of a linked list
* and returns the head node's data or 0 if the linked list is empty
* @head: the pointer to the pointer to the head node
* Return: int n or 0
*/
int pop_listint(listint_t **head)
{
	listint_t *atm, *new;
	int a;

	if (head == NULL)
		return (0);
	atm = new = *head;
	if (*head)
	{
		a = (atm)->n;
		*head = atm->next;
		free(new);
	}
	return (a);
}
