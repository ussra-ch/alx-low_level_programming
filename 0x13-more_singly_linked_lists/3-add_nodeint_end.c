#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end -  adds a new node at the end of a listint_t list.
 * @head: the head of the libked list
 * @n: integer
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tail;

	new = malloc(sizeof(listint_t));
	tail = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	tail = *head;

	while (tail->next != NULL)
	{
		tail = tail->next;
	}
	tail->next = new;
	tail = new;

	return (new);
}
