#include"lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: the head of the linked list
 * Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
int i = 0;

const dlistint_t *tmp = h;

while (tmp)
{
printf("%d\n", tmp->n);
tmp = tmp->next;
i++;
}
return (i);
}
