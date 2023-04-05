#include "lists.h"

/**
 * pop_listint - delete the head of a linked list
 * @head: head of the list
 * Return: the data n of the head
 */
int pop_listint(listint_t **head)
{
	int n;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	*head = (*head)->next;
	free(*head);
	return (n);
}
