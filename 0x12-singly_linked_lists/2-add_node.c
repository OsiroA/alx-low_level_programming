#include "lists.h"
#include <stdlib.h>
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
 * add_node - This function adda new node at the beginning of a list
 * @head: the current position in the list
 * @str: the string that is to be duplicated and where head will be added to
 * Return: address of the new element if success or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	int a, length;
	char *temp;
	list_t *list;

	if (str == NULL || head == NULL)
		return (NULL);
	length = _strlen(str);
	list = *head;
	temp = malloc((length + 1) * sizeof(char));

	if (temp == NULL)
	{
		return (NULL);
	}
	for (a = 0; str[a]; a++)
		temp[a] = str[a];
	list = malloc(sizeof(list_t));
	if (list == NULL)
	{
		free(temp);
		return (NULL);
	}
	list->str = temp;
	list->len = length;
	list->next = *head;
	*head = list;
	return (list);
}
