#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 -  frees a listint_t list
 * @head: the head of the linked list
 */
void free_listint2(listint_t **head)
{
        listint_t *tmp;

        while (*head)
        {
                tmp = *head;
                *head = (*head)->next;
                free(tmp);
        }
	*head = NULL;
}
