#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end
 * @head: head of the node
 * @n: value to the new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *s;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		s = *head;
		while (s->next != NULL)
			s = s->next;
		s->next = new_node;
		new_node->prev = s;
		/*s = new_node;*/
	}

	return (new_node);
}
