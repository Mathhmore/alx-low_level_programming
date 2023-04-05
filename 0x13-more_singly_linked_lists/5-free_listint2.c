#include "lists.h"

/**
 * free_listint2 - frees listint_t and set head null
 * @head: head of the list
 * Return: void
 */
void free_listint(listint_t **head)
{
	listint_t *h;

	if (*head == NULL)
		return;
	while (*head != NULL)
	{
		h = *head;
		*head = head->next;
		free(h);
	}
	*head = NULL;
	head = NULL;
}
