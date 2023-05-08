#include "main.h"
#include <string.h>

/**
 * append_text_to_file - appends given text to a given file that exists
 * @filename: name of the file
 * @text_content: content to be appended
 * Return: 1 on success, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fl, wrote;

	if (!filename)
		return (-1);

	fl = open(filename, O_WRONLY | O_APPEND);
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
