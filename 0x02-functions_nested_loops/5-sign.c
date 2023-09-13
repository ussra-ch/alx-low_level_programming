#include "main.h"
/**
 * print_sign - Prints the the sign of the input followed by a newline
 *
 * Description: This function prints the lowercase alphabet in a
 * sequential order followed by a newline character.
 *@n: integer 
 * Return: Always (Success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n ==0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
