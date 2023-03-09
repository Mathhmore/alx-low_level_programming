#include "main.h"

/**
 * help_prime - helps is_prime_number
 * @n: number
 * @num: another number for trial
 * Return: 1 or 0
 */
int help_prime(int n, int num)
{
	if (n == 1)
		return (0);
	else if (n != num && n % num == 0)
		return (0);
	else if (n == num)
		return (1);
	num++;
	return (help_prime(n ,num));
}
/**
 * is_prime_number - prime or not
 * @n: number
 * Return: 1 if n is prime and 0 otherwise
 */
int is_prime_number(int n)
{
	return (help_prime(n, 2));
}
