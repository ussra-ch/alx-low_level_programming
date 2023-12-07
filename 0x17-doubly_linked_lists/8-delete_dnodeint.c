#include "lists.h"
/**
 * 
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current, *tmp, *tmp2;

    unsigned int i = 0;

    current = *head;
    if (*head == NULL)
        return (-1);
    if (index == 0)
    {
        current = current->next;
        free(current);
        return (1);
    }
    while (i < index)
    {
        i++;
        tmp = current;
        current = current->next;
    }
    tmp2 = current->next;
    tmp->next = tmp2;
    tmp2->prev = tmp;
    free(current);
    return (1);
}
