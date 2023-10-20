#include "lists.h"
#include <stdlib.h>
/**
 *free_list - that frees a list_t lis
 *@head: the linked list's head
 */
void free_list(list_t *head)
{
	while (head->next != NULL)
	{
		free(head);
		head = head->next;
	}
}

