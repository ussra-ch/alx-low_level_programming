#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: the head of the linked list
 * Return: the sum of all th data of the linked list
 */
int sum_listint(listint_t *head)
{
	int s = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
