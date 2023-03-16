#include "main.h"

/**
 * _strlen - finds length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while(*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
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
	int i = 0, num, j = 0;

	num = n;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0)
		return (NULL);
	if (num >= _strlen(s2))
		num = _strlen(s2);
	concat_str = malloc(sizeof(*concat_str) * (_strlen(s1) + num + 1));
	if (concat_str == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		concat_str[i] = s1[i];
		i++;
	}
	i = _strlen(s1);
	while (j < num)
	{
		concat_str[i] = s2[j];
		i++;
		j++;
	}
	concat_str[i] = '\0';

	return (concat_str);
}
