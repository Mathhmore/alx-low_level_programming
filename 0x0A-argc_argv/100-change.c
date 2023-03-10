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
	int r, change = 0, num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argv[1][0] == '-')
	{
		printf("0\n");
		return (0);
	}
	num = atoi(argv[1]);
	r = num;
	change += r / 25;
	r = r % 25;
	change += r / 10;
	r = r % 10;
	change += r / 5;
	r = r % 5;
	change += r / 2;
	r = r % 2;
	change += r;

	printf("%d\n", change);
	return (0);
}
