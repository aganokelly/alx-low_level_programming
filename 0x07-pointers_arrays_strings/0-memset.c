#include "main.h"

/**
 * _memset - fill block with specific value
 * @s: starting addresses
 * @b: desired value
 * @n: bytes to be changed
 * Return: changed array
 */

char *_memset(char *s, char b, unsigned int n)
{
	int k = 0;

	for (; n > 0 ; k++)
	{
		s[k] = b;
		n--;
	}
	return (s);
}
