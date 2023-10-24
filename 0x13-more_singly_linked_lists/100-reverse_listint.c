#include "lists.h"
/**
 * reverse_listint -  reverses a listint_t linked list
 * @head: the head of the linked list
 * return: ptr to the new linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *prv;

	prv = NULL;
	while ((*head)->next != NULL)
	{
		next = (*head)->next;
		(*head)->next = prv;
		prv = *head;
		*head =  next;

	}
	return (*head);
}
