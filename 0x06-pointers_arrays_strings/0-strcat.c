#include <stdio.h>
#include "main.h"

/**
 * _strlen - finds string length
 * @str: string given
 * Return: length of the string str
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * _strcat - append a string
 * @dest: string destination
 * @src: string to be appended
 * Return: the pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int str_len_dest = _strlen(dest);
	int i = str_len_dest;
	int j = 0;

	while (*src != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}
