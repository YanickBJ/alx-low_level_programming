#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number to check
 * @index: index starting from 0, of the bit we want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int m;

	if (index > (sizeof(unsigned int) * 8) - 1)
		return (-1);
	m = (n >> index) & 1;
	return (m);
}
