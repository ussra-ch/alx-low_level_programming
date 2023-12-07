#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: the head of the linked list
 * @idx: the given index
 * @n: data
 * Return: the address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *tmp, *new;

    unsigned int i;

    tmp = *h;
    if (*h == NULL)
        return (NULL);
    for ( i = 0; i < idx; i++)
    {
        tmp = tmp->next;
    }
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
        return (NULL);
    new->n = n;
    new->next = tmp->next;
    new->prev = tmp;
    tmp->next = new;
    return (new);
}
