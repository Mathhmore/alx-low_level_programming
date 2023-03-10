#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - entry point
 * @argc: argument counter
 * @argv: pointer to the array of the argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int c, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	if (argc > 0)
	{
		for (c = 1; c < argc; c++)
		{
			if (isdigit(argv[c][0]) != 0 && isdigit(argv[c][strlen(argv[c]) - 1]))
				sum += atoi(argv[c]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
