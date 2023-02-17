#include <stdio.h>

/**
 * main - print single digit number separated with ,
 * Return: 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num == 9)
			putchar(num +  '0');
		else
		{
			putchar(num +  '0');
			putchar(',');
			putchar(' ');
		}
	}
	/* putchar('\n'); */

	return (0);
}
