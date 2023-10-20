#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input
 * Return: natural square root of a number
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	while (i * i < n)
		i++;
	if (i * i == n)
		return (i);
	else
		return (-1);
}
