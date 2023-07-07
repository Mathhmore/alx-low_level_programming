#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table
 * @size: size of the table to be created
 * Return: a pointer to a newly created hash table or NULL for failer
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	hash_node_t **arr;
	unsigned long int i;

	if (size == 0)
		return (NULL);
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	arr = malloc(sizeof(*arr) * size);
	if (arr == NULL)
	{
		free(ht);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		arr[i] = NULL;
	ht->size = size;
	ht->array = arr;

	return(ht);
}
