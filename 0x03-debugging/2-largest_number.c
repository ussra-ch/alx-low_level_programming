#include "main.h"

/**
 * largest_number - Finds the largest of three integers.
 * @a: First integer.
 * @b: Second integer.
 * @c: Third integer.
 *
 * Return: The largest of the three integers.
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}

