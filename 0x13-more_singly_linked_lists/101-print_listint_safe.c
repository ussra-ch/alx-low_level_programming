#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: the head of the linked list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	int len = 0;

	if (head == NULL)
		exit (98);
	while (head)
	{
		len++;
		printf ("[%p] %d\n", head->n);
		head = head->next;
	}
	return (len);
}
