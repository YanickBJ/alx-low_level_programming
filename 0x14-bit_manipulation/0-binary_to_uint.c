#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to unsigned int.
 *
 * @b: string containing the binary number.
 *
 * Return: the converted number or NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num, pub;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (pub = 1, num = 0, len--; len >= 0; len--, pub *= 2)
	{
		if (b[len] == '1')
			num += pub;
	}

	return (pub);
}
