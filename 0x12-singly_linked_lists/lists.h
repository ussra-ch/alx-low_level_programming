#ifndef LISTS
#define LISTS

#include <stddef.h>
/**
 * struct list_s - singly linked list
 * @str: string
 * @len: integer (length)
 * @next: ptr to the next node of the list
 *
 * Description: simply linked list.
 */
typedef struct list_s
{
	char *str;

	int len;

	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif
