#include "lists.h"

/**
 * sum_dlistint - calculates the sum of all int values of nodes of a list
 * @head: head of the list
 * Return: sum or 0 for empty list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
