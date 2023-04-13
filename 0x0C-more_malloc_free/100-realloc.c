#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer memory
 * @old_size: size in bytes
 * @new_size: size in bytes
 * Return: null
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	unsigned int k;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		nptr = malloc(new_size);

		if (nptr == NULL)
			return (NULL);
		return (nptr);

	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	nptr = malloc(new_size);

	if (nptr == NULL)
		return (NULL);

	for (k = 0; k < old_size && k < new_size; k++)
	{
		nptr[k] = ((char *) ptr)[k];
	}
	free(ptr);
	return (nptr);

}
