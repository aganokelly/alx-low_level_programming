#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list.
 * @head: A pointer  of the head of the list_t list
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *future;
	listint_t *past;


	if (head == NULL || *head == NULL)
		return (NULL);
	 past = NULL;

	while ((*head)->next != NULL)
	{
		future = (*head)->next;
		(*head)->next = past;
		past = *head;
		*head = future;
	}
	(*head)->next = past;

	return (*head);
}
