#include "main.h"

/**
 * flip_bits -  returns the number of bits
 * @n: first int
 * @m: to move to
 * Return: returns number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int counter;

	diff = n ^ m;
	counter = 0;

	while (diff)
	{
		counter++;
		diff &= (diff - 1);
	}

	return (counter);
}
