#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at the given index
 * @head: head of the list
 * @idx: index given
 * @n: value for the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *h, *new;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	h = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (i < idx - 1)
	{
		h = h->next;
		i++;
		if (h == NULL)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = h->next;
	h->next = new;
	return (new);
}
