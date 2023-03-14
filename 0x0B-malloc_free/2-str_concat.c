#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string1
 * @s2: string2
 * Return: a pointer to a memory contains the concatenated string
 * and NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	unsigned int i, j = 0;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	else if (s1 == NULL && s2 != NULL)
		s1 = "";
	else if (s1 != NULL && s2 == NULL)
		s2 = "";
	concat_str = malloc(strlen(s1) + strlen(s2) + 1);

	if (concat_str == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
		concat_str[i] = s1[i];
	for (i = strlen(s1); i < (strlen(s1) + strlen(s2)); i++)
	{
		concat_str[i] = s2[j];
		j++;
	}
	return (concat_str);
}

