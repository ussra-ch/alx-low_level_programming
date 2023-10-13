#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: first input
 * @c: second input
 * Return: pointer to the first occurrence of the character c in the string s
 */
char *_strchr(char *s, char c)
{
	char *res;

	int i = 0, u, j = 0;

	if (c == NULL)
	{
		return (NULL);
	}
	while (s[i] != c)
	{
		i++;
	}
	for (u = i; s[u]; u++)
	{
		res[j] = s[u];
		j++;
	}
	return (res);
}
