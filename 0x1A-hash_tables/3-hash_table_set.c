#include "hash_tables.h"

/**
 * create_and_add_node - malloc, set values, and insert node into hash table
 * @ht: hash table
 * @key: key; can't be empty string
 * @value: value
 * @idx: index to insert in at hash table
 * Return: 1 if success, 0 if fail
 */
int create_and_add_node(hash_table_t *ht, const char *key, const char *value,
			unsigned long int idx)
{
	hash_node_t *h = NULL;
	char *k;
	char *val;

	h = malloc(sizeof(hash_node_t));
	if (h == NULL)
		return (0);

	k = strdup(key);
	if (!k)
	{
		free(h);
		return (0);
	}

	val = strdup(value);
	if (!val)
	{
		free(k);
		free(h);
		return (0);
	}

	h->key = k;
	h->value = val;

	if ((ht->array)[idx] == NULL)
		h->next = NULL;
	else
		h->next = (ht->array)[idx];
	(ht->array)[idx] = h;

	return (1);
}

/**
 * hash_table_set - add element to hash table
 * @ht: hash table
 * @key: key; can't be empty string
 * @value: value
 * Return: 1 if success, 0 if fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *h = NULL;
	char *val;

	if (!ht || !(ht->array) || !key || strlen(key) == 0 || !value)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);

	h = (ht->array)[idx];
	while (h && (strcmp(key, h->key) != 0))
		h = h->next;
	if (h != NULL)
	{
		val = strdup(value);
		if (!val)
			return (0);
		if (h->value)
			free(h->value);
		h->value = val;
		return (1);
	}

	return (create_and_add_node(ht, key, value, idx));
}
