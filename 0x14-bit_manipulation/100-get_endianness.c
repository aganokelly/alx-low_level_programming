#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: if big endian - 0. if little endian - 1.
 */

int get_endianness(void)
{
	unsigned int q;
	char *x;

	q = 1;
	x = (char *) &q;
	return ((int)*x);
}
