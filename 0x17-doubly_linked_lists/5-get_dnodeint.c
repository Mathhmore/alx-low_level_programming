#include "lists.h"

/**
 * len - length of the node
 * @h: head of the list
 * Return: length
 */
size_t len(dlistint_t *h)
{
	unsigned int c;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}
/**
 * get_dnodeint_at_index - gets the node at a given index
 * @head: head of the list
 * @index: index given
 * Return: node at a given index or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (index < 0 || index > len(head))
		return (NULL);
	while (count < index)
	{
		count++;
		head = head->next;
	}
	return (head);
}
