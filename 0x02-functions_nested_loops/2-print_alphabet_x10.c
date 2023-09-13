#include "main.h"
/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times
 *
 * Description: This function prints the lowercase alphabet in a
 * sequential order followed by a newline character.
 *
 * Return: void (Success)
 */

void print_alphabet_x10(void)
{
	int j;

	for (j = 0;  j< 10; j++)
	{
		char i;

		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
	return;
}
