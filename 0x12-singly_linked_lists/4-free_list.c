#include "lists.h"
#include <string.h>

/**
 * free_list - frees list_t
 * @head: head of the node
 * Return: void
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
