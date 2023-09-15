#include "main.h"
/**
 * print_triangle - the function
 * @size: the input
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('#');
	}
}

