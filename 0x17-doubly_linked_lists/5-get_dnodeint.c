#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: the head of the linked list
 * @index: nbr of returned nodes
 * Return:  nth node of a dlistint_t linked list
 * if the node does not exist, return NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;

	unsigned int i;

	i = 0;
	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	tmp = head;
	while (i < index)
	{
		i++;
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}
	return (tmp);
}
