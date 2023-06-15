#include "lists.h"

/**
 * len - finds length of a list
 * @h: head of the list
 * Return: length
 */
size_t len(dlistint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

/**
 * delete_dnodeint_at_index - deletes a node at a given index
 * @head: head of the list
 * @index: index
 * Return: 1 for success and -1 for failar
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int c = 0;
	dlistint_t *s;

	if (*head == NULL)
		return (-1);
	if (len(*head) == 1 && index == 0)
	{
		*head = NULL;
		return (1);
	}
	if (index == 0)
	{
		(*head)->next->prev = NULL;
		*head = (*head)->next;
		return (1);
	}
	s = *head;
	while (s != NULL)
	{
		if (c == index)
			break;
		s = s->next;
		c++;
	}
	if (index == len(*head) - 1)
	{
		s->prev->next = NULL;
		s->prev = NULL;
		return (1);
	}
	else if (index > 0 && index < len(*head) - 1)
	{
		s->prev->next = s->next;
		s->next->prev = s->prev;
		return (1);
	}
	return (-1);
}
