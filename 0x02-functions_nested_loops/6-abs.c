#include "main.h"
/**
 * int _ab - Prints the absolute value of an integer.
 *
 * Description: This function prints the lowercase alphabet in a
 * sequential order followed by a newline character.
 * @n: integer
 * Return: void (Success)
 */
int _abs(int n)
{

	if (n < 0)
	{
		return (-n);
		
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n);
	}
}
