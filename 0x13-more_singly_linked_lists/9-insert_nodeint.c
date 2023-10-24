#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: the head if the linked list
 * @idx: index
 * @n: the value of the new node
 * Return: ptr to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;

	listint_t *new, *tmp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	tmp = *head;
	while (i < (idx - 1))
	{
		i++;
		tmp = tmp->next;
	}
	new->n = n;
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
