#include "main.h"

/**
 * read_textfile - reads a text file
 * @filename: name of the file
 * @letters: size or number of letters to be read
 * Return: the size printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fl;
	ssize_t Read, wrote;
	char *buff;

	if (filename == NULL)
		return (0);

	fl = open(filename, O_RDONLY);
	if (fl == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	Read = read(fl, buff, letters);
	if (Read == -1)
	{
		free(buff);
		close(fl);

		return (0);
	}
	wrote = write(STDOUT_FILENO, buff, Read);
	if (wrote == -1)
	{
		free(buff);
		close(fl);

		return (0);
	}
	close(fl);

	return (Read);
}
