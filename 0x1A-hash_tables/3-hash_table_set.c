#include "hash_tables.h"

/**
 * hash_table_set - sets a key value paired on a hash table
 * @key: a key for the the value
 * @value: value
 * @ht: hash table
 * Return: 1 if it succeeded 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *h = NULL;
	unsigned long int idx;
	hash_node_t **arr;

	arr = malloc(sizeof(*array));
	if (arr == NULL)
		return (0)
	idx = key_index((const unsigned char *)key, ht->size);
	if (!ht || !(ht->array) || !key || strlen(key) == 0 || !value)
		return (0);
	h->key = key;
	h->value = value;
	if (arr[idx] != NULL)
		arr[0] = value;
	else
		arr[idx] = value;
	if ((ht->array)[idx] == NULL)
	h->key = key;
	h->value = value;
	ht->array = key;

	return (1);
}
