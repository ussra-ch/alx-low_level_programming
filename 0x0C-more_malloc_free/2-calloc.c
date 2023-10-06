#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of these elements
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ar;

	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ar = malloc(size * nmemb);

	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
		ar[i] = 0;
	return (ar);
}
