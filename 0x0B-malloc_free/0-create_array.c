#include "main.h"
#include <stdlib.h>
/**
 * create_array - the function that creates an array
 * @size: the size of the array
 * @char: the character
 * Return: pointer to the array (Success)
 */
char *create_array(unsigned int size, char c)
{
	char *ar;

	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		ar = malloc(size * sizeof(char));
		while (i < size)
		{
			ar[i] = c;
			i++;
		}
		return (ar);
	}
}
