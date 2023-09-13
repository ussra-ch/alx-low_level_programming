#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet followed by a newline
 * Description: This function prints the lowercase alphabet in a
 *              sequential order followed by a newline character.
 * Return: void (Success)
 */
void print_alphabet(void)
{
	char i = 'a';
	while (i <= 'z')
	{
	    _putchar(i);
	    i++;
	}

	_putchar('\n');
}

