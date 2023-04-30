#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list.
 * @head: A pointer  of the head of the list_t list
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead = NULL;
	listint_t *behind = NULL;


	while (*head)
	{
		ahead = (*head)->next;
		(*head)->next = behind;
		behind = *head;
		*head = ahead;
	}

	*head = behind;

	return (*head);
}
