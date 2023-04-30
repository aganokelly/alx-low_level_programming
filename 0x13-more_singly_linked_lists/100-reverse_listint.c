#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list.
 * @head: A pointer  of the head of the list_t list
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *past = NULL;
	listint_t *future = NULL;


	while (*head)
	{
		future = (*head)->next;
		(*head)->next = past;
		past = *head;
		*head = future;
	}

	(*head)->next = past;

	return (*head);
}
