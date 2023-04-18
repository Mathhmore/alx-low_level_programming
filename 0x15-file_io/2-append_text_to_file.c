#include "main.h"
#include <string.h>

/**
 * append_text_to_file - appends a text to a file
 * @filename: name of the file
 * @text_content: contents to be appended
 * Return: 1 for success and -1 for failar
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t wrote_char;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
		return (-1);
	if (!text_content)
	{
		close(fp);
		return (1);
	}
	wrote_char = write(fp, text_content, (ssize_t)strlen(text_content));
	if (wrote_char == -1 || wrote_char != (ssize_t)strlen(text_content))
	{
		close(fp);
		return (-1);
	}
	close(fp);
	return (1);
}
