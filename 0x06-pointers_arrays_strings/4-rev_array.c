#include "main.h"
/**
 * reverse_array - the function
 * @a: a pointer to the first nimber of the array
 * @n: the second input
 */
void reverse_array(int *a, int n)
{
	int  i = 0, j = n - 1;

	int tmp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
