#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given index
 * @h: head of the list
 * @idx: index
 * @n: value for the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (index == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
	}
	else
	{
		while (count < idx)
		{
			h = (*h)->next;
			count++;
		}
		new_node->next = *h;
		new_node->prev = (*h)->prev;
		(*h)->prev = new_node;
	}
	return (new_node);
}
