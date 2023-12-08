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
	dlistint_t *temp, *temp2;
	unsigned int idx = 0;

	if (*h == NULL)
	{
		return (-1);
	}
	if (idx == 0)
	{
		temp = (*h)->next;
		temp->prev = NULL;
		/*free(temp);*/
		return (1);
	}
	temp = *h;
	while (temp != NULL)
	{
		if (idx == idx)
		{
			temp2 = temp->next;
			temp2->prev = temp->prev->prev;
			temp = temp2->prev;
			temp->next = temp2->next->next;
			/*free(temp2);*/
			return (1);
		}
		temp = temp->next;
		idx++;
	}
	if (idx < idx)
		return (-1);
	if (temp->next == NULL)
		return (1);

	return (-1);
}

