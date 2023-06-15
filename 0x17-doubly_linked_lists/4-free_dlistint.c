#include "lists.h"

/**
 * free_dlistint - frees dlistint
 * @head: head of the list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *s;

	while (head != NULL)
	{
		s = head;
		head = head->next;
		free(s);
	}
}
