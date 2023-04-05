#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at the given index
 * @head: head of the list
 * @idx: index given
 * @n: value for the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *h, *new, *an;
	unsigned int i;

	h = *head;
	while (i < idx - 1 && h != NULL)
	{
		h = h->next;
		i++;
	}
	if (idx > i + 1)
		return (NULL);
	new = malloc(sizeof(listint_t));
	new->n = n;
	an = h;
	new->next = an->next;
	h = new;
	return (new);
}
