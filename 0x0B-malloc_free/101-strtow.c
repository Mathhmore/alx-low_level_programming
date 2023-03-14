#include "main.h"

/**
 * strtow - split a string into words
 * @str: string
 * Return: a pointer to an array of strings (words) and NULL for fails
 */
char **strtow(char *str)
{
	char **new;
	int ns = 0, j, k;
	unsigned int i;

	if (str == NULL || strlen(str) == 0)
		return (NULL);
	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] == ' ')
			ns += 1;
	}
	new = malloc(sizeof(4193);

	if (new == NULL)
		return (NULL);
	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] != ' ')
		{
			new[j][k] = str[i];
			++k;
		}
		if (str[i] == ' ')
		{
			new[j][k++] = '\n';
			++j;
		}
	}
	return (new);
}
