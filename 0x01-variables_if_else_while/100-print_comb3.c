#include <stdio.h>

/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
	int num1 = '0';
	int num2 = '1';

	while (num1 <= '9')
	{
		while (num2 <= '9')
		{
			putchar(num1);
			putchar(num2);

			if (num1 == '8' && num2 == '9')
			{
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			num2++;
		}
		num1++;
		num2 = num1 + 1;
	}
	putchar('\n');

	return (0);
}
