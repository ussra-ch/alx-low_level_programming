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
	unsigned int i, len = 0;

	listint_t *new, *tmp, *tail;

	new = malloc(sizeof(listint_t));
	tmp = *head;
	tail = *head;
	while (tail)
	{
		len++;
		tail = tail->next;
	}
	if (len < idx || idx == 0)
		return (NULL);
	if (new == NULL)
		return (NULL);
	new->n = n;
	for (i = 0; i < (idx - 1);  i++)
	{
		tmp = tmp->next;
	}
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
