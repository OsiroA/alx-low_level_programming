#include <stdlib.h>
#include "lists.h"
/**
* free_listint_safe - this function can free lists with a loop
* @h: the pointer to the pointer to the first node
* Return: size of the freed list
*/
size_t free_listint_safe(listint_t **h)
{
	listint_t *ptr;
	int count = 0;

	if (h == NULL || *h == NULL)
		return (0);
	ptr = *h;
	while (ptr != NULL)
	{
		count++;
		if (ptr <= ptr->next)
		{
			free(ptr);
			*h = NULL;
			break;
		}
		ptr = ptr->next;
	}
	*h = NULL;
	return (count);
}
