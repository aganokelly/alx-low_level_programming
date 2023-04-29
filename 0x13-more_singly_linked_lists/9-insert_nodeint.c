#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node to a listint_t list
 * @head: pointer  of the listint_t list
 * @idx: index of the listint _t list where the new node should be added
 * @n: integer for the new node
 * Return: if the function fails NULL, otherwise the address of th new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *tp = *head;
	unsigned int kel;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = tp;
		*head = new;
		return (new);
	}
	for (kel = 0; kel < (idx - 1); kel++)
	{
		if (tp == NULL || tp->next == NULL)
			return (NULL);

		tp = tp->next;
	}

	new->next = tp->next;
	tp->next = new;

	return (new);
}
