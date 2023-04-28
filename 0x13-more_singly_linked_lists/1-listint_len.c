#include "lists.h"
#include <stdio.h>

/**
 * listint_len - return number of elements in a linked listint_t list
 * @h: pointer to the head of the listint_t list
 * Return: numberof elements in the listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t elem = 0;

	while (h)
	{
		elem++;
		h = h->next;
	}
	return (elem);
}
