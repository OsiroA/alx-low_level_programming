#include "hash_tables.h"
/**
 * key_index - This function gives the index of a key
 * @key: the key whose index is needed
 * @size: the size of thwe array
 * Return: the index gottenform the djbe algorithm function writtern in a
 * previous code
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
