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
	int i = 0;
	const char *str_dup;

	str_dup = strdup(str);
	head = malloc(sizeof(size_t));
	if (head == NULL)
		return (NULL);
	while (str_dup != NULL)
	{
		head[i] = malloc(sizeof(char));
		if (head[i] == NULL)
		{
			free(head[i]);
			free(head);
			return (NULL);
		}
		head[i] = str_dup[i];
	}
	return (head);
}

