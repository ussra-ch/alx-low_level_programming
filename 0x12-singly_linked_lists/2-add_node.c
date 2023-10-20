#include "lists.h"
#include "string.h"
#include "stdlib.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: the head of the linked list
 * @str: the new node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	char *d_str;

	int length = 0;

	d_str = strdup(str);
	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	for (length = 0; str[length];)
		length++;
	new->str = d_str;

	new->len = length;

	new->next = *head;

	*head = new;

	return (new);
}
