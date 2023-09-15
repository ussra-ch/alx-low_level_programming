#include "main.h"
/**
 * _isdigit - short one
 * @c: input
 *
 * Return: 1 (Success) 0 otherwise
 */
int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
