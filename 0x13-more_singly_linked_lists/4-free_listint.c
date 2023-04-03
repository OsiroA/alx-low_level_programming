#include <stdlib.h>
#include "lists.h"
/**
* free_listint - This function frees a list
* @head: pointer to the list to be freed
* Return: void
*/
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
