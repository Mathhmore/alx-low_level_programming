#include "lists.h"

/**
 * sum_listint - add all elements of listint_t
 * @head: head of the list
 * Return: sum or 0 if it is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *h;
	int sum = 0;

	h = head;
	while(h != NULL)
	{
		sum += h->n;
		h = h->next;
	}
	return (sum);
}
