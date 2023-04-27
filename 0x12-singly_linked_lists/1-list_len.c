#include "lists.h"
#include <stdlib.h>
/**
 * list_len - gives the number of elements in a list.
 * @h: pointer to list
 *
 * Return: number of elements in a linked list.
 */

size_t list_len(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		s++;
		h = h->next;
	}
	return (s);
}
