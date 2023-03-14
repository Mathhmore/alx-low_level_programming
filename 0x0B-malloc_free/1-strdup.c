#include "main.h"

/**
 * _strdup - allocate a new space of memory
 * @str: string
 * Return: a pointer to a new string which is a duplicate of the string str
 * and NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *s;
	long unsigned int i;

	if (str == NULL)
		return (NULL);
	s = malloc(strlen(str) + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < strlen(str); i++)
		s[i] = str[i];

	return (s);
}
