#include "main.h"

/**
 * check_chars - check for each elements of given binary
 * @bb: binary given
 * Return: 1 for success and 0 for failar
 */
int check_chars(const char *bb)
{
	unsigned int i;

	for (i = 0; i < strlen(bb); i++)
	{
		if (bb[i] != '0' && bb[i] != '1')
			return (0);
	}
	return (1);
}

/**
 * power - power of a number
 * @num: num given
 * @exp: exponent
 * Return: num the power of exp
 */
unsigned int power(unsigned int num, unsigned int exp)
{
	unsigned int i;
	unsigned int p = 1;

	if (exp == 0)
		return (1);
	for (i = 0; i < exp; i++)
		p *= num;
	return (p);
}

/**
 * binary_to_uint - change binary to unsigned int
 * @b: given binary
 * Return: the umsigned int or 0 for failar
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = strlen(b), uint = 0, j, x;
	int check = check_chars(b);

	j = len - 1;
	if (check == 0)
		return (0);
	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b == '0')
			x = 0;
		if (*b == '1')
			x = 1;
		uint += (x * power(2, j));
		j--;
		b++;
	}
	return (uint);
}
