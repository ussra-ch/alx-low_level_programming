#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: the head of the linked list
*/
void free_dlistint(dlistint_t *head)
{
    dlistint_t *tmp, *current;
    tmp = head->next;
    while (tmp)
    {
        current = tmp->next;
        free(tmp);
        tmp = current;
    }
}
