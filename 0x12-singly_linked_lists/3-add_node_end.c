#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - gets length of the string
 * @st: the string
 * Return: length of the string, 0 if empty
 */
int _strlen(const char *st)
{
	int a;

	for (a = 0; st[a] != '\0'; a++)
		;
	return (a);
}
/**
 * add_node_end - This function adds a new node at the end of a list
 * @head: the current position in the list
 * @str: the string we want to add a new node to
 * Return: address of the new element or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *temp;
	list_t *list, *atm;

	if (str == NULL)
		return (NULL);
	temp = strdup(str);
	if (temp == NULL)
		return (NULL);
	list = malloc(sizeof(list_t));
	if (list == NULL)
		return (NULL);
	list->str = temp;
	list->len = _strlen(str);
	list->next = NULL;

	if (*head == NULL)
	{
		*head = list;
		return (*head);
	}
	atm = *head;
	while (atm->next != NULL)
		atm = atm->next;
	atm->next = list;
	return (*head);
}
