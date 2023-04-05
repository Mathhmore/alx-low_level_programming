#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at the given index
 * @head: head of the list
 * @index: index to be deleted
 * Return: 1 for success and -1 for failar
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *h, *an;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	h = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(h);
		return (1);
	}
	while (i < index - 1 && h != NULL)
	{
		h = h->next;
		i++;
	}
	if (index > i || h->next == NULL)
		return (-1);
	an = h->next;
	h->next = h->next->next;
	free(an);
	return (1);
}
