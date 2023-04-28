#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer of the head of the listint_t list
 */

void free_listint2(listint_t **head)
{
	listint_t *tp;

	if (head == NULL)
		return;
	while (*head)
	{
		tp = (*head)->next;
		free(*head);
		*head = tp;
	}
	*head = NULL;
}
