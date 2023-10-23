#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint -  deletes the head node of a listint_t linked list
 * and returns the head node’s data (n)
 * @head: the head of the linked list
 * Return:  the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	int tmp;

	if (*head == NULL)
		return (0);
	tmp = (*head)->n;
	free(head);
	return (tmp);
}
