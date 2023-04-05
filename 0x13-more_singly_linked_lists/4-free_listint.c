#include "lists.h"

/**
 * free_listint - frees listint_t
 * @head: head of the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
