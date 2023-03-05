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
 * trcpy - copies a string
 * @dest: string destination
 * @src: string to be coppied
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int str_len = _strlen(src);
	int i = 0;

	while (i < (str_len - 1))
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
