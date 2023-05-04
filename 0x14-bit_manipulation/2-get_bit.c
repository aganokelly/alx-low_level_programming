#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: unsigned int.
 * @index: index of the bit.
 * Return: value of the bit at index. if an error occured - -1.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int q;

	if (n == 0 && index < 64)
		return (0);
	for (q = 0; q <= 63; n >>= 1, q++)
	{
		if (index == q)
		{
			return (n & 1);
		}
	}
	return (-1);
}
