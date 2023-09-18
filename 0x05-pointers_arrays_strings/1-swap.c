#include "main.h"
/**
 * swap_int - the function
 * @a: the first input
 * @b: the second input
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;

	*b = tmp;
}

