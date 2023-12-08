#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: the head of the linked list
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp1, *tmp2;

	tmp2 = head->next;
	tmp1 = head;
	while (tmp2->next != NULL)
	{
		free(tmp1);
		tmp1 = tmp2;
		tmp2 = tmp2->next;
	}
	if (tmp2 != NULL)
	{
		free(tmp1);
		free(tmp2);
		return;
	}
	free(tmp1);
}
