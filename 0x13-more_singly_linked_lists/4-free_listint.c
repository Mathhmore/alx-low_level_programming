#include "lists.h"

/**
 * free_listint - frees listint_t
 * @head: head of the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *h;

	if (head == NULL)
		return;
	h = head;
	while (head != NULL)
	{
		free(h);
		h = h->next;
	}
}
