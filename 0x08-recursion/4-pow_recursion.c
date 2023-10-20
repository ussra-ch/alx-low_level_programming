#include "main.h"
/**
 * _pow_recursion - the function
 * @x: the 1st input
 * @y: the 2nd input
 * Return: int (Success)
 */
int _pow_recursion(int x, int y)
{
	int tmp, m = 1, i;

	tmp = x;

	for (i = 0; i < y; i++)
	{
		m = m * tmp;
	}
	return (m);
}
