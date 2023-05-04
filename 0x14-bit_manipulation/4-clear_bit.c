#include "main.h"

/**
 * clear_bit - sets the value of abit to 0.
 * @n: pointer to unsigned long int.
 * @index: index of the bit
 * Return: if it works -1. If an error occurs - -1.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int t;

	if (index > 63)
		return (-1);
	t = 1 << index;
	if (*n & t)
		*n ^= t;
	return (1);
}
