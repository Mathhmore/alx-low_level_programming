#include "main.h"
#include <string.h>

/**
 * create_file - create a file
 * @filename: name of the file
 * @text_content: contents to be writen in the file
 * Return: 1 for success and -1 for failar
 */
int create_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t wrote_char;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fp == -1)
		return (-1);
	wrote_char = write(fp, text_content, (ssize_t)strlen(text_content));
	if (wrote_char == -1 || wrote_char != (ssize_t)strlen(text_content))
	{
		close(fp);
		return (-1);
	}
	close(fp);
	return (1);
}
