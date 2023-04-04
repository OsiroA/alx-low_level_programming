#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_listint_safe - This function prints a linked list
* @head: pointer to the first node in the list
* Return: number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *ptr = head;

	if (head == NULL)
		exit(98);

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	if (ptr == NULL)
		return (count);
	return (count);
}
