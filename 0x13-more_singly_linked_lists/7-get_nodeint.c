#include "lists.h"

/**
 * get_nodeint_at_index - find the nth node of listint_t
 * @head: head of the list listint_t
 * @index: the index of the node
 * Return: nth node or NULL if it does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *h;
	unsigned int i = 0;

	h = head;
	while (i < index && h != NULL)
	{
		h = h->next;
		i++;
	}
	if (index > i)
		return (NULL);
	return (h);
}
