#include "main.h"

/**
 * string_nconcat - concatenate two strings
 * @s1: string1
 * @s2: string2
 * @n: number of char to be concatenated from s2
 * Return: a pointer to a concatenated string and NULL for failar
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_str;
	unsigned int i = 0;
	unsigned int len_s1 = 0, len_s2 = 0;

	while (*s1 != '\0')
	{
		len_s1++;
		i++;
	}
	i = 0;
	while (*s2 != '\0')
	{
		len_s2++;
	       	i++;
	}
	i = 0;
	if (n >= len_s2)
		n = len_s2;

	concat_str = malloc(len_s1 + n + 1);
	if (concat_str == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		concat_str[i] = s1[i];
		i++;
	}
	i = 0;
	while (i != n)
	{
		concat_str[i] = s2[i];
		i++;
	}
	concat_str[n] = '\0';

	return (concat_str);
}
