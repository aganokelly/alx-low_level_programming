#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of chars
 * @size: size of array
 * @c: char to fill in the array
 * Return: array filled
 */

char *create_array(unsigned int size, char c)
{
	unsigned int k;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);
	for (k = 0; k < size ; k++)
	{
		s[k] = c;
	}

	return (s);
}
