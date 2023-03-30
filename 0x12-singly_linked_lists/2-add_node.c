#include "lists.h"
#include <string.h>

/**
 * add_node - add node at the beginning og list_t
 * @head: head of the new node
 * @str: value of the node
 * Return: the address of the new node or NULL for failar
 */
list_t *add_node(list_t **head, const char *str)
{
	char *str_dup;
	list_t *new_node;

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
	if (head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;
	*head = new_node;
	return (new_node);
}

