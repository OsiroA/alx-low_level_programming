#include "hash_tables.h"

/**
 * hash_table_create - This function creates a hash table
 * @size: The size of the array
 * Return: a pointer to the newly created hash table or NULL if failed
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	/*create a new hash table */
	hash_table_t *table = NULL;
	/*hash_node_t **array = NULL;*/
	unsigned long int idx;

	if (size <= 0)
	{
		return (NULL);
	}
	/* allocate space for table */
	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		return (NULL);
	}
	table->size = size;
	/* allocate space for array */
	table->array = malloc(size * sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		return (NULL);
	}
	/* initialize the array*/
	for (idx = 0; idx < size; idx++)
		table->array[idx] = NULL;

	return (table);
}
