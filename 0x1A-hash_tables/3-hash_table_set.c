#include "hash_tables.h"
/**
 * hash_table_set - This function adds an element to the hash table
 * @ht: The hash table to be updated with the key/value
 * @key: the key to be updated
 * @value: the value to be updated
 * Return: 1 if success, 0 if a failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode;
	unsigned long size, idx;

	if (ht == NULL || value == NULL || key == NULL)
		return (0);
	size = ht->size;
	idx = key_index((const unsigned char *)key, size);

	if (strcmp(ht->array[idx]->key, key) == 0 && ht->array[idx] != NULL)
	{
		ht->array[idx]->value = strdup(value);
		return (1);
	}
	newNode = malloc(sizeof(hash_node_t));

	if (newNode == NULL)
		return (0);

	newNode->key = strdup(key);
	newNode->value = strdup(value);
	newNode->next = ht->array[idx];
	ht->array[idx] = newNode;
	return (1);
}
