#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index
 * of a dlistint_t linked list
 * @head: the head of the linked list
 * @index: the given index
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp1, *tmp2;

	unsigned int i = 0;

    	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		tmp1 = (*head)->next;
		tmp1->prev = NULL;
		free(tmp1);
		return (1);
	}
	tmp1 = *head;
	while (tmp1 != NULL)
	{
		if (i == index)
		{
			tmp2 = tmp1->next;
			tmp2->prev = tmp1->prev->prev;
			tmp1 = tmp2->prev;
			tmp1->next = tmp2->next->next;
			free(tmp2);
			return (1);
		}
		tmp1 = tmp1->next;
		i++;
	}
	if (i < index)
		return (-1);
	if (tmp1->next == NULL)
		return (1);

	return (-1);
}
