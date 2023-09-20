#include "main.h"
/**
 * _strcat - the function
 * @dest: the first input
 * @src: the second one
 * Return: pointer to char (Success)
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}

