#include "main.h"

/**
 * list_len - number of elements in a list
 * @h: elements of list_t
 * Return: number of element
 */
size_t list_len(const list_t *h)
{
	size_t num_of_elements = 0;

	while (h != NULL)
	{
		num_of_elements++;
		h = h->next;
	}
	return (num_of_elements);
}
