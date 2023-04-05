#include "lists.h"

/**
 * add_nodeint - add node at the beginning of listint_t
 * @head: head of the first node
 * @n: value for the new node
 * Return: the address of the new element or NULL if fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
