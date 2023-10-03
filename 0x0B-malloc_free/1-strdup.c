#include "main.h"
#include <stdlib.h>
/**
 * _strdup - the function
 * @str: the input
 * Return: pointer (Success)
 */
char *_strdup(char *str)
{
	char *ar;

	int i = 0, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	ar = (char *) malloc(sizeof(char) * (len + 1));

	if (ar == NULL)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (str[i] != '\0')
		{
			ar[i] = str[i];
			i++;
		}
		ar[i] = '\0';
		return (ar);
	}
}
