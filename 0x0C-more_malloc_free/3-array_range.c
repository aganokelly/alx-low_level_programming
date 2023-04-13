#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: first integer
 * @max: second integer
 * Return: integer value
 */

int *array_range(int min, int max)
{

	int *b, k = 0;

	if (min > max)
		return (NULL);

	b = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (b == NULL)
		return (NULL);

	while (min <= max)
	{
		b[k] = min;
		k++;
		min++;
	}
	return (b);
}
