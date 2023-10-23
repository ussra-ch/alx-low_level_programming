#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes the node at
 * index of a listint_t linked list
 * @head: the head of the linked list
 * @index: the index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *tmp, *t;

	tmp = malloc(sizeof(listint_t));
	t = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	while (i < index - 1)
	{
		i++;
		tmp = tmp->next;
	}
	t = tmp->next;
	tmp->next = t->next;
	free(t);
	return (1);
}
