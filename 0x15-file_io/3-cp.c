#include "main.h"

/**
 * print_error - prints error messages and exits with exit value
 * @flag: flag is exit value or file descriptor
 * @str: str is a name, either of the two filenames
 * @fl: file descriptor
 * Return: 0 on success
 */
int print_error(int flag, char *str, int fl)
{
	switch (flag)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(flag);
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
			exit(flag);
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
			exit(flag);
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fl);
			exit(flag);
		default:
			return (0);
	}
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument values
 * Return: 0 on success exit with the above cases otherwise
 */
int main(int argc, char *argv[])
{
	int fl, fp, Read, wrote;
	char *buff[1024];

	if (argc != 3)
		print_error(97, NULL, 0);

	fp = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fp == -1)
		print_error(99, argv[2], 0);

	fl = open(argv[1], O_RDONLY);
	if (fl == -1)
		print_error(98, argv[1], 0);

	while ((Read = read(fl, buff, 1024)) != 0)
	{
		if (Read == -1)
			print_error(98, argv[1], 0);

		wrote = write(fp, buff, Read);
		if (wrote == -1)
			print_error(99, argv[2], 0);
	}
	close(fp) == -1 ? (print_error(100, NULL, fp)) : close(fp);
	close(fl) == -1 ? (print_error(100, NULL, fl)) : close(fl);

	return (0);
}
