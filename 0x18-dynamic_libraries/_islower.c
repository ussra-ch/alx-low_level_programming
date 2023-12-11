#include "main.h"
/**
 * _islower - checks the lowercase alphabet
 *
 * Description: This function prints the lowercase alphabet in a
 * sequential order followed by a newline character.
 *@c: normal int
 * Return: Always (Success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
