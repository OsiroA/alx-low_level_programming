#include "lists.h"
/**
* sum_listint - This function returns the sum of all the data in a linked list
* @head: pointer to the first node in the link
* Return: sum or NULL
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	/*int n;*/
	listint_t *newptr;

	if (head == NULL)
		return (0);
	newptr = head;
	/*n = newptr->n;*/
	while (newptr != NULL)
	{
		sum += newptr->n;
		newptr = newptr->next;
	}
	return (sum);
}
