#include "lists.h"

/**
 * len - finds length of a list
 * @h: head of the list
 * Return: length of the list
 */
size_t len(dlistint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
/**
 * insert_dnodeint_at_index - inserts a node at a given index
 * @h: head of the list
 * @idx: index
 * @n: value for the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *s;
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	s = *h;
	if (*h == NULL && idx > 0)
		return (NULL);
	if (*h == NULL)
	{
		s = *h;
		new_node->prev = NULL;
		new_node->next = s;
		*h = new_node;
	}
	else if (idx == 0)
		new_node = add_dnodeint(&s, n);
	else if (idx == len(*h))
		new_node = add_dnodeint_end(&s, n);
	else
	{
		s = *h;
		while (count < idx)
		{
			s = s->next;
			count++;
		}
		new_node->next = s;
		new_node->prev = s->prev;
		s->prev->next = new_node;
		s->prev = new_node;
	}
	return (new_node);
}
