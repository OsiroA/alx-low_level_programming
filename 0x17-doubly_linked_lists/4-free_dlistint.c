#include "lists.h"

/**
* free_dlistint - This function frees a list
* @head: a pointer to the first node on the list
* Return: void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
