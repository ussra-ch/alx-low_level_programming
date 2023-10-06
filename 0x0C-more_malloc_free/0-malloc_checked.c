#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: input
 * Return: pointer (Success)
 */
void *malloc_checked(unsigned int b)
{
	char *r;

	r = malloc(b);

	if (r == NULL)
	{
		exit(98);
	}
	return (r);
}
