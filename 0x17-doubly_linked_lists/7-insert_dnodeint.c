#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: the head of the linked list
 * @idx: the given index
 * @n: data
 * Return: the address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0, len = 0;

	dlistint_t *tmp, *new;

	tmp = *h;
	if (*h == NULL)
		return (NULL);
	while (tmp != NULL)
	{
		len++;
		tmp = tmp->next;
	}
	if (idx > len)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	tmp = *h;
	while (i < idx - 1)
	{
		tmp = tmp->next;
		i++;
	}
	new->next = tmp->next;
	new->prev = tmp;
	tmp->next->prev = new;
	tmp->next = new;
	return (new);
}

