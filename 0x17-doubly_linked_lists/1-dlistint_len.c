#include "lists.h"

/**
 * dlistint_len - finds length of a doubly linked list
 * @h: head of the list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
