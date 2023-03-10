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
		printf("%d\n", argv - 1);
	return (0);
}
