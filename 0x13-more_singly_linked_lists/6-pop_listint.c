#include "lists.h"

/**
 * pop_listint - delete the head of a linked list
 * @head: head of the list
 * Return: the data n of the head
 */
int pop_listint(listint_t **head)
{
	int n;

	n = (*head)->n;
	*head = (*head)->next;
	return (n);
}
