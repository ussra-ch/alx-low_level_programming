#include "main.h"
/**
 * _strlen - the function
 * @s: the first character of the string
 *Return: the length of the string
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
