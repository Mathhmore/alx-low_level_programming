#include "lists.h"

/**
 * get_dnodeint_at_index - gets the node at a given index
 * @head: head of the list
 * @index: index given
 * Return: node at a given index or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	while (count < index)
	{
		count++;
		head = head->next;
	}
	return (head);
}
