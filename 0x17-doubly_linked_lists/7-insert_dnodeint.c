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
	unsigned int i = 1, len = 0;

	dlistint_t *tmp, *new;

	tmp = *h;
	new = malloc(sizeof(dlistint_t));
	//insert at the beginning
	if (*h == NULL || idx == 0)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*h = new;
		return (*h);
	}
	//check if the idx is valide
	while (tmp != NULL)
	{
		len++;
		tmp = tmp->next;
	}
	if (idx > len)
		return (NULL);
	//fullfit the node
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	tmp = *h;

	while (i < idx)
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

