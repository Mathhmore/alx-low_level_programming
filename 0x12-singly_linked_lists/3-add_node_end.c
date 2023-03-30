#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a node at the end of list_t
 * @head: head of the node
 * @str: value of the node
 * Return: the address of the new element or NULL for failar
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp;
	char *str_dup;

	if (str == NULL)
		return (NULL);
	str_dup = strdup(str);
	if (str_dup == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = str_dup;
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
	}
	return (new_node);
}
