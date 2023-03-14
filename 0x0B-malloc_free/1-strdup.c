#include "main.h"

/**
 * _strdup - allocate a new space of memory
 * @str: string
 * Return: a pointer to a new string which is a duplicate of the string str and NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *s = malloc(strlen(str));
	int i;

	if (str == NULL || s = NULL)
		return (NULL);
	for (i = 0; i < strlen(str); i++)
		s[i] = str[i];

	return (s);
}
