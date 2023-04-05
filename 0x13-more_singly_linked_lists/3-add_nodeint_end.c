#include "lists.h"

/**
 * add_nodeint_end - add node at the end
 * @head: head of the list
 * @n: value to be assigned for the new node
 * Return: the address of the new element or NULL for failar
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *h;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		h  = *head;
		while (h->next != NULL)
		{
			h = h->next;
		}
		h->next = new;
	}
	return (new);
}
