#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: input
 * Return: pointer (Success)
 */
void *malloc_checked(unsigned int b)
{
	int *r = malloc(sizeof(b));

	int *ptr = malloc(sizeof(int));

	*ptr = 8;

	if (r == NULL)
	{
		return (ptr);
	}
	return (r);
}
