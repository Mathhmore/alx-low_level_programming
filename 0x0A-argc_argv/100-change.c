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
	int r, change = 0, num = atoi(argv[1]), cents[] = {25, 10, 5, 2, 1};
	int i = 0;

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
	if (num >= 25)
		i = 0;
	else if (num >= 10)
		i = 1;
	else if (num >= 5)
		i = 2;
	else if (num >= 2)
		i = 3;
	else if (num >= 1)
		i = 4;
	r = num;
	if (argc == 2)
	{
		while (i < 5)
		{
			change += r / cents[i];
			r = r % cents[i];
			i++;
		}
		printf("%d\n", change);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
