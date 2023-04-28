#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: pointer to the address of the head of the listint_t list
 * Return: if the list is empty 0, otherwise the head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *tp;
	int kel;

	if (!head || !*head)
		return (0);

	kel = (*head)->n;
	tp = (*head)->next;
	free(*head);
	*head = tp;

	return (kel);
}
