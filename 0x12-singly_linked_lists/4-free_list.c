#include "lists.h"
#include <stdlib.h>
/**
 * free_list - this function frees a list
 * @head: the position of the list to be freed
 * Return: void
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
