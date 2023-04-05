#include "lists.h"

/**
 * listint_len - counts number of elements in a linked list listint_t
 * @h: variable for listint_t
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t num_of_elements = 0;

	while (h != NULL)
	{
		num_of_elements++;
		h = h->next;
	}
	return (num_of_elements);
}
