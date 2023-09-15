#include "main.h"

/**
 * _isupper: checks if the character is upper
 * @c: the character
 * Description: test
 * Return: 1 (Success), 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
