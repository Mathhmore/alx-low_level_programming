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
	char *k, *val;

	k = strdup(key);
	if (k == NULL)
	{
		free(h);
		return (0);
	}
	val = strdup(value);
	if (val == NULL)
	{
		free(k);
		free(h);
		return (0);
	}
	h = malloc(sizeof(hash_node_t));
	if (h == NULL)
		return (0);
	arr = malloc(sizeof(*arr));
	if (arr == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	if (!ht || !(ht->array) || !key || strlen(key) == 0 || !value)
		return (0);
	h->key = k;
	h->value = val;
	/*if (arr[idx] != NULL)
		arr[0] = val;
	else
		arr[idx] = val;*/
	if ((ht->array)[idx] == NULL)
	h->key = k;
	h->value = val;

	return (1);
}
