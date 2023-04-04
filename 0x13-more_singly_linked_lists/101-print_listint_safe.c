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
	const listint_t *ptr = head, *optr;
	/**
	*if (head == NULL || ptr == NULL)
	*	exit(98);
	*/
	while (ptr != NULL)
	{
		printf("[%p] %d\n", (void *) ptr, ptr->n);
		count++;

		optr = ptr;
		ptr = ptr->next;

		if (optr <= ptr)
		{
			printf("-> [%p] %d\n", (void *)ptr, ptr->n);
			exit(98);
		}
	}
	return (count);
}
