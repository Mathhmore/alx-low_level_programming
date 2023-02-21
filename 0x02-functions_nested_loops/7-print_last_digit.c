#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints last digit of a number
 * @num: number to be evaluated
 * Return: returns the last digit
 */
int print_last_digit(int num)
{
	int LD = num % 10;

	if (LD < 0)
		LD *= -1;
	_putchar(LD + '0');
	return (LD);
}
