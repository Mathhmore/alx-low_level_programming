#include "main.h"

/**
 * read_textfile - read a file and print to stdout
 * @filename: name of the file
 * @letters: ammount of letters to read
 * Return: number of letters it could print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	char *buff;
	ssize_t read_char, wrote_char;

	if (filename == NULL)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	read_char = read(fp, buff, letters);
	if (read_char == -1)
	{
		free(buff);
		close(fp);
		return (0);
	}
	wrote_char = write(STDOUT_FILENO, buff, read_char);
	if (wrote_char == -1)
	{
		free(buff);
		close(fp);
		return (0);
	}
	close(fp);
	return (wrote_char);
}
