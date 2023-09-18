#include "main.h"
/**
 * _strcpy - the function
 *@dest: input
 *@src: another one
 *Return: a pointer (Success)
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, len;

	while (src[i] != '\0')
	{
		i++;
	}
	len = i + 1;

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
