#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: where memory is stored
 * @src: where memory is copied
 * @n: number of bytes
 * Return: copied memory with bytes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int m = n;

	for (; j < m ; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
