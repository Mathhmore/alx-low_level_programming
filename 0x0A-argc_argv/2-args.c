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
	int c;

	for (c = 0; c <= argc - 1; c++)
		printf("%s\n", argv[c]);
	return (0);
}
