#include "lists.h"

/**
 * print_list - print all elements of a list_t
 * @h: elements of list_t
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t num_of_nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		num_of_nodes++;
		h = h->next;
	}
	return (num_of_nodes);
}
