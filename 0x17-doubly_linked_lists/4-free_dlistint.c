#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: the head of the linked list
*/
void free_dlistint(dlistint_t *head)
{
    dlistint_t *tmp;
    tmp = head->next;
    while (tmp->next)
    {
        free(head);
        head = tmp;
        tmp = tmp->next;
    }
    free(tmp);
}
