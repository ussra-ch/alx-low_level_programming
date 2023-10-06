#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: the first input
 * @s2: the second input
 * @n: n
 * Return: the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 2, i = 0, j = 0, k = 0, l = 0;

	char *ar;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s2[i] != '\0')
	{
		i++;
		len2++;
	}
	while (s1[j] != '\0')
	{
		j++;
		len1++;
	}
	if (n >= len2)
	{
		n = len2;
	}
	ar = malloc(len1 + n);

	for (; l < len1; l++)
	{
		ar[l] = s1[l];
	}
	for (; k < n; k++)
	{
		ar[l + k] = s2[k];
	}
	ar[len1 + n + 1] = '\0';

	if (ar == NULL)
	{
		return (NULL);
	}
	return (ar);
}
