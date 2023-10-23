#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the node
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int len = 0;

	if (h == NULL)
		return (NULL);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
