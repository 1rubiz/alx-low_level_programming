#include "hash_tables.h"

/*
 * hash_table_create - function that creates a hash table
 * @size: parameter. Hash table size.
 *
 * Return: pointer to the new hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int x;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
	{
		return NULL;
	}
	ht->array = malloc(size * sizeof(hash_node_t *));
	if (ht->array == NULL)
	{
		return NULL;
	}
	for (x = 0; x < size; x++)
	{
		ht->array[x] = NULL;
	}
	ht->size = size;
	return (ht);
}
