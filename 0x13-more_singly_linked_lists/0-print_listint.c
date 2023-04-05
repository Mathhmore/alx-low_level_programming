#include "lists.h"

/**
 * print_listint - print all elements of listint_t
 * @h: variable for listint_t
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num_of_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num_of_nodes++;
		h = h->next;
	}
	return (num_of_nodes);
}
