#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: the head of the linked list
 * @n: data
 * Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *new;

	tmp = malloc(sizeof(dlistint_t));

	new = malloc(sizeof(dlistint_t));

if (new == NULL)
	return (NULL);
	tmp = *head;
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (tmp->next)
		tmp = tmp->next;
	if (*head != NULL)
	{
		tmp->next = new;
		new->prev = tmp;
	}

	return (*head);
}
