#include "main.h"
#include <string.h>

/**
 * binary_to_uint - changes binary to an int
 * @b: a binary number given
 * Return: the converted number or 0 if b is NULL ora bit is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int len, i = 0;
	unsigned int chnd_int = 0;

	if (b == NULL)
		return (0);
	len  = strlen(b) - 1;
	while (b[i])
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		if (b[i] == '1')
			chnd_int += (1 * (1 << len));
		i++;
		len--;
	}
	return (chnd_int);
}
