#include "main.h"
int mine(int n, int a)
{
	int i;

	if (a == 1)
		return (1);
	if (n % a == 0)
		i = 1;
	else 
		i = 0;
	return (i + mine(n, a - 1));
}
/**
 * is_prime_number - returns prime numbers
 * @: input
 * Return: prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (mine(n, n) > 2)
		return (0);
	return (1);
}
