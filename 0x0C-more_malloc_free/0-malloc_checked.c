#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory
 * @b: size allocated
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
	void *k;

	k = malloc(b);

	if (k == NULL)
		exit(98);
	return (k);
}
