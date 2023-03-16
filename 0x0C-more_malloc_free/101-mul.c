#include "main.h"
#include <ctype.h>

/**
 * main - multiply numbers
 * @argc: number of arguments passed
 * @argv: arguments
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	unsigned int i;

	if (argc - 1 != 2)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 0; i < strlen(argv[1]); i++)
	{
		if (isdigit(argv[1][i]) == 0)
		{
			printf("Error\n");
			exit(98);
		}
	}
	for (i = 0; i < strlen(argv[2]); i++)
	{
		if (isdigit(argv[2][i]) == 0)
		{
			printf("Error\n");
			exit(98);
		}
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
