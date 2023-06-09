#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning of a listint_t list
 * @head: pointer to the address of the head of the listint_t list
 * @n:  new node
 * Return: if function fails NULL, otherwise the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
