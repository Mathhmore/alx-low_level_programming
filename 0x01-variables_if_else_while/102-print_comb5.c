#include <stdio.h>

/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
	int num1 = '0';
	int num2 = '0';
	int num3 = '0';
	int num4 = '1';

	while (num1 <= '9')
	{
		while (num2 <= '9')
		{
			while (num3 <= '9')
			{
				while (num4 <= '9')
				{
					if (num1 == num3 && num2 == num4)
					{
					}
					else
					{
						putchar(num1);
						putchar(num2);
						putchar(' ');
						putchar(num3);
						putchar(num4);

						if (num1 == '9' && num2 == '8' && num3 == '9' && num4 == '9')
						{
						}
						else
						{
							putchar(',');
							putchar(' ');
						}
						num4++;
					}
				}
				num3++;
				num4 = '0';
			}
			num2++;
			num3 = '0';
			num4 = '1';
		}
		num1++;
		num2 = '0';
		num3 = '0';
		num4 = '1';
	}
	putchar('\n');

	return (0);
}
