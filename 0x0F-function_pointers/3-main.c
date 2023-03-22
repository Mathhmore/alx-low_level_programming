#include "3-calc.h"

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: arguments passed
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int result;
	int (*f)(int, int);

	if (argc - 1 != 3)
	{
		printf("Error\n");
		exit(98);
	}
	f = get_op_func(argv[2]);
	if (argv[2][1] != '\0' || f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = f(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
