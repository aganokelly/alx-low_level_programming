#include "main.h"

/**
 * set_bit - sets the value of a bit to 1.
 * @n: pointer to an unsigned long int.
 * @index: index of the bit.
 * Return: 1 if it works. -1 if an error occurs.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int g;

	if (index > 63)
	{
		return (-1);
	}
	g = 1 << index;
	*n = (*n | g);
	return (1);
}
