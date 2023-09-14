#include<stdio.h>
/**
 * positive_or_negative - the function
 * Decription: short one
 * @n: integer
 * Return: Always (Success)
 */

void positive_or_negative(int n)
{
	if (n < 0)
	{
		printf("%d is negative", n);
		printf("\n");
	}
	else if (n == 0)
	{
		printf("0 is zero");
		printf("\n");
	}
	else
	{
		printf("%d is positive", n);
		printf("\n");
	}
}
