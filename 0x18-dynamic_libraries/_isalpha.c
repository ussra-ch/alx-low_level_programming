#include "main.h"
/**
 * _isalpha - Prints the lowercase alphabet followed by a newline
 *
 * Description: This function prints the lowercase alphabet in a
 * sequential order followed by a newline character.
 *@c: description
 * Return: void (Success)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
