#include "main.h"

 /**
  * clear_bit - sets the value of a bit to 0 at a given index
  * @n: pointer to number
  * @index: index is the index, starting from 0
  * Return: 1 if it worked, or -1 if an error occurred
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	if (index > (sizeof(unsigned long int) * 8) - 1)
		return (-1);
	num = ~(1ul << index);
	*n = *n & num;
	return (1);
}
