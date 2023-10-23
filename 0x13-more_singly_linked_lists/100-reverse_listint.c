#include "lists.h"
/**
 * reverse_listint -  reverses a listint_t linked list
 * @head: the head of the linked list
 * return: ptr to the new linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp, *tail;

	tmp = *head;
	tail = *head;
	while (tail)
	{
		tail = tail->next;
	}
	*head = tail;
	tail = tmp;
	return (*head);
}
