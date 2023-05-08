#include "main.h"
#include <string.h>

/**
 * create_file - creates file with permissions rw-------
 * @filename: name of the file to be created
 * @text_content: content of the new file
 * Return: 1 on success, -1 for an error
 */
int create_file(const char *filename, char *text_content)
{
	int fl, wrote;

	if (!filename)
		return (-1);

	fl = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fl == -1)
		return (-1);

	if (!text_content)
	{
		close(fl);
		return (1);
	}

	wrote = write(fl, text_content, (int)strlen(text_content));
	if (wrote == -1 || wrote != (int)strlen(text_content))
	{
		close(fl);
		return (-1);
	}
	close(fl);

	return (1);
}
