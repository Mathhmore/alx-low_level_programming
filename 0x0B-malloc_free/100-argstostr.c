#include "main.h"

/**
 * argstostr - concatenate all arguments
 * @ac: argument count
 * @av: arguments
 * Return: a pointer to a new string and NULL for fails
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, k = 0, wl = 0;
	unsigned int j;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < strlen(av[i]); j++)
			wl += 1;
	}
	str = malloc(wl + ac);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < strlen(av[i]); j++)
		{
			str[k] = av[i][j];
			k++;
		}
		k++;
		str[k] = '\n';
	}
	return (str);
}
