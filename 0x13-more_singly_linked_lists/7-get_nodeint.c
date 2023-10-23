#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: the head of the linked list
 * @index: the index of the node, starting at 0
 * Return: ptr to the new linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i;

	for (i = index; i <= i; i--)
	{
		if (head == NULL)
			return (0);
		head = head->next;
	}
	return (head);
}
