#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: the min (input)
 * @max: the max (input)
 * Return: ptr (Success)
 */
int *array_range(int min, int max)
{
	int *ar;

	int i, j;

	if (min > max)
	{
		return (NULL);
	}

	ar = malloc(sizeof(int) * (max - min + 1));

	for (j = 0, i = min; j < (max - min + 1) && i <= max; j++, i++)
	{
		ar[j] = i;
	}
	ar[j] = '\0';

	if (ar == NULL)
	{
		return (NULL);
	}
	return (ar);
}
