#include "lists.h"
/**
* get_nodeint_at_index - This function returns the nth node of a linked list
* @head: pointer to the list
* @index: index of the node
* Return: NULL or nth node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;

	while (a < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		a++;
	}
	return (head);
}
