#include "lists.h"

/**
* sum_dlistint - This function returns the sum of all the data(n) of a list
* @head: pointer to the first node of the list
* Return: 0 if empty list or the sum
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	temp = head;

	if (!head)
		return (0);
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
