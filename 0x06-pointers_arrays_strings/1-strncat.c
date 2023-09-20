#include "main.h"
/**
 * _strcat - the function
 * @dest: the first input
 * @src: the second one
 * @n: nt
 * Return: pointer to char (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j <= n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
