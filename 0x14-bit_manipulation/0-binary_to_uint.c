#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to unsigned int.
 *
 * @b: string containing the binary number.
 *
 * Return: the converted number or NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int x;

	if (b == NULL)
		return (0);

	while (b[x] != '\0')
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		num = num * 2 + (b[x] - '0');
		x++;
	}
	return (num);
}
