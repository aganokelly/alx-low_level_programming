#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: listint list to be freed
 * Return: void has no return type
 */

void free_listint(listint_t *head)
{
	listint_t *tp;

	while (head)
	{
		tp = head->next;
		free(head);
		head = tp;
	}

}
