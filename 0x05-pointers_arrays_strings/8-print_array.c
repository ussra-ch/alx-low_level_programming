#include<stdio.h>
#include"main.h"
/**
 * print_array - the funtion
 * @a: the first pointer of the array
 * @n: the second input
 */
void print_array(int *a, int n)
{
	int i = 0;
	if (n > 0)
	{
		for (i = 0; i < n - 1; i++)
		{
			printf("%d, ", a[i]);
		}
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
