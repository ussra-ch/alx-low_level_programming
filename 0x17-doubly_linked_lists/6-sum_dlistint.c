#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of
 * a dlistint_t linked list
 * @head: the head of the linked list
 * Return: the sum of all the data, 0 otherwise
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	int s;

	if (head == NULL)
		return (0);
	tmp = head;
	s = 0;
	while (tmp)
	{
		s += tmp->n;
		tmp = tmp->next;
	}
	return (s);
}

