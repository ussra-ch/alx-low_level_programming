#include "main.h"
/**
 * print_diagonal - the function
 * @n: the input
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
