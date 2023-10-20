#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input
 * Return: natural square root of a number
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n == (i * i))
		return (i);
	else if (n != i * i)
		return (-1);
	_sqrt_recursion(i + 1);
	return (n);
}
