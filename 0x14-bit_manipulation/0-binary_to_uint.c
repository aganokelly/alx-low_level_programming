#include "main.h"

/**
 * binary_to_uint - function converts binanry to numbers
 * @b: pointer to a string
 * Return: returns the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int bu;
	int ke;
	int  base_t;

	if (!b)
	{
		return (0);
	}
	bu = 0;
	for (ke = 0; b[ke] != '\0'; ke++)
		;
	for (ke--, base_t = 1; ke >= 0; ke--, base_t *= 2)
	{
		if (b[ke] != '0' && b[ke] != '1')
		{
			return (0);
		}
		if (b[ke] & 1)
		{
			bu += base_t;
		}
	}
	return (bu);
}
