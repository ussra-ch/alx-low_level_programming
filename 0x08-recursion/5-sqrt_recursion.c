#include "main.h"
/**
 * mine - claculates the sqrt of a num
 * @n: input
 * @a: input
 * Return: ineger
 */
int mine(int n, int a)
{
	if (n == (a * a))
		return (a);
	if (n <= (a * a))
		return (-1);
	else
		return (mine(n, a + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input
 * Return: natural square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (mine(n, 0));
}
