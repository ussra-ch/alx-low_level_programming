#include "lists.h"
#include <stdlib.h>
/**
 *free_list - that frees a list_t lis
 *@head: the linked list's head
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}

