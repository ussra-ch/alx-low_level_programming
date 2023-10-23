#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: ptr to the first node of the linked list
 * @n: int
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		*head = new;
		return (new);
	}
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
