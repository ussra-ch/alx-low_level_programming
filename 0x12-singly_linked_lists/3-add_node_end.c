#include "lists.h"
#include "stdlib.h"
#include "string.h"
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: the head of the linked list
 * @str: input
 * Return:the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *str_cpy;

	int length;

	list_t *new, *tail;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	for (length = 0; str[length];)
		length++;
	str_cpy = strdup(str);

	new->str = str_cpy;

	new->len = length;

	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		tail = *head;

		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = new;

		tail = new;
	}

	return (new);
}
