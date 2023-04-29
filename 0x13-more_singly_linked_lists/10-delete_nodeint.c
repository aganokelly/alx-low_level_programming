#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given
 *                           index of a listint_t list.
 * @head: A pointer  of the listint_t list.
 * @index: The index of the node to be deleted - indices start at 0.
 *
 * Return: On success - 1. On failure - -1.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tp = NULL;
	listint_t *md = *head;
	unsigned int kel;

	if (md == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(md);
		return (1);
	}
	for (kel = 0; kel < (index - 1); kel++)
	{
		if (md->next == NULL)
			return (-1);
		md = md->next;

	}
	tp = md->next;
	md->next = tp->next;
	free(tp);
	return (1);
}

