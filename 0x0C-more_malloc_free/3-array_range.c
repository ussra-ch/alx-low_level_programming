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

	int i;

	if (min > max)
	{
		return (NULL);
	}

	ar = malloc(sizeof(*ar) * ((max - min) + 1));

	for (i = 0; min <= max; min++)
	{
		ar[i] = min;
		i++;
	}
	if (ar == NULL)
	{
		return (NULL);
	}
	return (ar);
}
