#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument counter
 * @argv: pointer to the array of the argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	if (argv[0])
	{
	}
	return (0);
}
