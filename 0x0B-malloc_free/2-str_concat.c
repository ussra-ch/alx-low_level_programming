#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates two string
 * @s1: the first input
 * @s2: the second input
 * Return: pointer to the new string (Success)
 */
char *str_concat(char *s1, char *s2)
{
	char *ar;

	int i = 0, j = 0, k, l, len1 = 0, len2 = 1, tmp = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		i++;
		len1++;
	}
	while (s2[j] != '\0')
	{
		j++;
		len2++;
	}
	ar = (char *)malloc(len1 + len2);

	if (ar == NULL)
	{
		return (NULL);
	}
	else
	{
		for (k = 0; k <= len1; k++)
		{
			ar[k] = s1[k];
		}
		for (l = len1, tmp = 0; l <= (len1 + len2) && tmp < len2; l++, tmp++)
		{
			ar[l] = s2[tmp];
		}
		return (ar);
	}
}
