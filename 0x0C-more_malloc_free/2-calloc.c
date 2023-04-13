#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of members
 * @size: the size
 * Return: NULL nmemb or size is 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int k = 0, l = 0;
	char *m;

	if (nmemb == 0 || size == 0)
		return (NULL);

	l = nmemb * size;
	m = malloc(l);

	if (m == NULL)
		return (NULL);
	while (k < l)
	{
		m[k] = 0;
		k++;
	}

	return (m);
}
