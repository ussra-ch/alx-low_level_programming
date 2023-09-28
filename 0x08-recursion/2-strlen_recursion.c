#include "main.h"
/**
 * _strlen_recursion - the function
 * @: the input
 * Return: the length of the string (Success)
 */
int _strlen_recursion(char *s)
{
	int len = 0;
	
	while (*s != '\0')
	{
		len++;
		_strlen_recursion(s + 1);
		s++;
	}
	return (len);
}
