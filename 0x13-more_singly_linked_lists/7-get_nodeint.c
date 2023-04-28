#include "lists.h"

/**
 * get_nodeint_at_index - locates a given node of a listint_t
 * @head: pointer to the of the listint_t list
 * @index: index of the node to locate.
 * Return: if the node does not exist NULL, otherwise the located node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int al = 0;
	listint_t *tp = hesd;

	while (tp && al < index)
	{
		tp = tp->next;
		al++;
	}
	return (tp ? tp : NULL);
}
