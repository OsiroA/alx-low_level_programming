#include "lists.h"
#include <stdlib.h>
/**
* free_listint2 - This function frees a list
* @head: the pointer that points to the pointer of the first node of the list
* Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *new, *atm;

	if (head == NULL)
		return;
	atm = *head;
	while (atm != NULL)
	{
		new = atm;
		atm = atm->next;
		free(new);
	}
	*head = NULL;
}
