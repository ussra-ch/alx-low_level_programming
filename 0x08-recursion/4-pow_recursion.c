#include "main.h"
/**
 * _pow_recursion - the function
 * @x: the 1st input
 * @y: the 2nd input
 * Return: int (Success)
 */
int _pow_recursion(int x, int y)
{
	if (y <= 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
