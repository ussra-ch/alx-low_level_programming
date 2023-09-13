#include <stdio.h>
#include "main.h"
/**
 * _start - computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: Always  (Success)
 */
int startt(void)
{
	int a, b, c = 0;
	a = 0;
	b = 0;
	while(a < 1024 && b < 1024)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			c += a;
		}
		else if (b % 3 == 0 || b % 5 == 0)
		{
			c =+ b;
		}
		a++;
		b++;
	}
	return (c);
}
/**
 * main - computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: Always 0 (Success)
 */
int main (void)
{
	startt ();
	return (0);
}
