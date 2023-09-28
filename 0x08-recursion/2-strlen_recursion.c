#include "main.h"
/**
 * _strlen_recursion - the function
 * @s: the input
 * Return: the length of the string (Success)
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
