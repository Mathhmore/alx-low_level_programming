#include "main.h"

/**
 * strtow - split a string into words
 * @str: string
 * Return: a pointer to an array of strings (words) and NULL for fails
 */
char **strtow(char *str)
{
	char **new;
	int j, k;
	int i = 0, l = 0;

	while (str[i] != '\0')
	{
		l += 1;
		i++;
	}
	i = 0;
	if (l == 0)
		return (NULL);
	if (str[0] == ' ' && l == 1)
		return (NULL);
	/*for (i = 0; i < strlen(str); i++)
	{
		if (str[i] == ' ')
			ns += 1;
	}*/
	new = malloc(sizeof(char *) * l);

	if (new == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		p[i] = malloc(sizeof(char) * l);
		if (str[i] != ' ')
		{
			new[j][k] = str[i];
			++k;
		}
		if ((str[i] == ' ' && str[i + 1] != ' ') || str[i] == '\0')
		{
			new[j][k] = '\0';
			k = 0;
			++j;
		}
		i++;
	}
	return (new);
}
